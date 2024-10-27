#include<iostream>
#include "TinyC3_22CS30027_22CS30019_translator.h"
#include <fstream>
#include <sstream>
#include <stack>
#include <iomanip> 
#include "lex.yy.c"  // Lexer generated by Flex
#include "y.tab.c"   // Parser generated by Bison
using namespace std;

/*
    Group :- TinyC-67
    Golla Meghanandh Manvith Prabhash :- 22CS30027
    Darapu Adhithya  :- 22CS30019
*/

// Define newline character for ease of formatting output
const char nl = '\n';

// Global Variables
QuadArray QuadList;            // Array to hold quads (three-address code)
Symbol* RecentSymbol;          // Pointer to the most recent symbol used
SymbolTable* CurrentST;        // Pointer to the current symbol table
SymbolTable* GlobalST;         // Pointer to the global symbol table
int SymbolTableCount;          // Count of symbol tables

string BlockType;              // Type of the current block
string VarType;                // Type of the current variable

// Constructor for SType, representing the type of a symbol
SType::SType(string Type_, int Width_, SType* ArrType_) :
    Type(Type_), Width(Width_), ArrType(ArrType_) {}

// Constructor for Symbol, representing a symbol in the symbol table
Symbol::Symbol(string Name_, string Type_, int Width_, SType* ArrType) :
    Name(Name_), offset(0), NestedTable(NULL), InitialValue("-") {
    Type = new SType(Type_, Width_, ArrType);   // Create a new type for the symbol
    size = SizeOfS(Type);                       // Calculate the size of the type
}

// Update the type and size of the symbol
Symbol* Symbol::Update(SType* Type_) {
    Type = Type_;                             // Update the type
    size = SizeOfS(Type_);                    // Update the size based on the new type
    return this;                               // Return the current symbol
}

// Constructor for SymbolTable, representing a table of symbols
SymbolTable::SymbolTable(string Name_, SymbolTable* Ptr_) : 
    Name(Name_), NumTempVar(0) {}

// Generate a temporary symbol with a specific type and initial value
Symbol* SymbolTable::GenTemp(SType* Type_, string InitialVal) {
    string Name = "t" + itos(CurrentST->NumTempVar++);  // Create a unique temporary name
    Symbol* S = new Symbol(Name);                        // Create a new symbol
    S->Type = Type_;                                     // Assign the type to the symbol
    S->InitialValue = InitialVal;                        // Set the initial value
    S->size = SizeOfS(Type_);                            // Calculate the size of the symbol
    CurrentST->Table.push_back(*S);                     // Add the symbol to the current symbol table
    return &(CurrentST->Table.back());                  // Return reference to the newly created symbol
}

// Overloaded GenTemp method to accept a string type
Symbol* SymbolTable::GenTemp(string Type_, string InitialVal) {
    string Name = "t" + itos(CurrentST->NumTempVar++);  // Create a unique temporary name
    Symbol* S = new Symbol(Name);                        // Create a new symbol
    SType* TempType = new SType(Type_);                  // Create a new type for the symbol
    S->Type = TempType;                                  // Assign the type to the symbol
    S->InitialValue = InitialVal;                        // Set the initial value
    S->size = SizeOfS(TempType);                         // Calculate the size of the symbol
    CurrentST->Table.push_back(*S);                     // Add the symbol to the current symbol table
    return &(CurrentST->Table.back());                  // Return reference to the newly created symbol
}

// Convert symbol type, generating a temporary symbol if necessary
Symbol* Symbol::Convert(string S) {
    bool B = (this->Type->Type == S);                   // Check if the current symbol's type matches the target type
    Symbol* Temp = SymbolTable::GenTemp(S);             // Generate a temporary symbol of the target type
    if (!B) {
        // Emit conversion quad if types are different
        QuadArray::Emit("=", Temp->Name, this->Type->Type + "to" + S + "(" + this->Name + ")");
    } else {
        // Emit direct assignment if types are the same
        QuadArray::Emit("=", Temp->Name, this->Name);
    }
    return Temp;                                         // Return the temporary symbol
}

// Look up a symbol by name in the symbol table
Symbol* SymbolTable::LookUp(string Name) {
    // Search in the current symbol table
    for (list<Symbol>::iterator it = Table.begin(); it != Table.end(); it++) {
        if (it->Name == Name) return &(*it);            // Return the symbol if found
    }

    Symbol* S = NULL;                                   // Initialize symbol pointer
    // Check parent symbol table if not found
    if (this->PtrToParent != NULL) {
        S = this->PtrToParent->LookUp(Name);
    }
    // If not found and this is the current symbol table
    if (CurrentST == this && S == NULL) {
        S = new Symbol(Name);                           // Create a new symbol
        Table.push_back(*S);                           // Add it to the table
        return &(Table.back());                        // Return reference to the new symbol
    }
    return S;                                          // Return found symbol or NULL
}

// Print the symbol table
void SymbolTable::Print() {
    // Print header for the symbol table
    cout << "______________________________________________________________________________________________________________________________________________" << nl << nl;
    cout << "Symbol Table Name : " << setfill(' ') << left << setw(50) << this->Name;
    cout << "Parent : " << setfill(' ') << left << setw(50) << ((this->PtrToParent != NULL) ? this->PtrToParent->Name : "NULL") << nl;
    cout << "______________________________________________________________________________________________________________________________________________" << nl << nl;

    // Print table header for symbols
    cout << setfill(' ') << left << setw(25) << "Name";
    cout << left << setw(25) << "Type";
    cout << left << setw(20) << "Initial Value";
    cout << left << setw(15) << "Size";
    cout << left << setw(15) << "Offset";
    cout << left << "Nested" << nl;
    cout << "______________________________________________________________________________________________________________________________________________" << nl << nl;

    list<SymbolTable*> Tab;                             // List to keep track of nested tables
    // Iterate over symbols in the table
    for (auto it = this->Table.begin(); it != this->Table.end(); it++) {
        cout << left << setw(25) << it->Name;         // Print symbol name
        cout << left << setw(25) << checkType(it->Type);  // Print symbol type
        cout << left << setw(20) << (it->InitialValue != "" ? it->InitialValue : "-"); // Print initial value
        cout << left << setw(15) << it->size;         // Print size
        cout << left << setw(15) << it->offset;       // Print offset
        cout << left;

        if (it->NestedTable != NULL) {
            cout << it->NestedTable->Name << nl;     // Print nested table name if it exists
            Tab.push_back(it->NestedTable);          // Add nested table to the list for further printing
        } else {
            cout << "NULL" << nl;                     // Indicate no nested table
        }
    }
    cout << "______________________________________________________________________________________________________________________________________________" << nl << nl;

    // Print any nested symbol tables
    for (auto it = Tab.begin(); it != Tab.end(); it++) {
        (*it)->Print();                               // Recursively print each nested table
        cout << nl;
    }
}

// Update offsets for symbols in the table
void SymbolTable::Update() {
    list<SymbolTable*> TableList;                    // List to keep track of nested tables
    int offset;                                       // Variable to track offset
    // Iterate over symbols in the table to update offsets
    for (list<Symbol>::iterator it = this->Table.begin(); it != this->Table.end(); it++) {
        if (it == this->Table.begin()) {
            offset = it->size;                        // First symbol offset is its size
        } else {
            it->offset = offset;                     // Set the offset for the current symbol
            offset += it->size;                      // Increment offset by size of current symbol
        }
        if (it->NestedTable != NULL) {
            TableList.push_back(it->NestedTable);    // Add nested table to the update list
        }
    }
    // Update nested tables
    for (auto it = TableList.begin(); it != TableList.end(); it++) {
        (*it)->Update();                             // Recursively call update on nested tables
    }
}
// Constructor for Quad class, initializing with string arguments
Quad::Quad(string Result_, string Arg1_, string Op_, string Arg2_) :
    Result(Result_), Op(Op_), Arg1(Arg1_), Arg2(Arg2_) {}

// Overloaded constructor for Quad class, initializing with an integer argument
Quad::Quad(string Result_, int Arg1_, string Op_, string Arg2_) :
    Result(Result_), Op(Op_), Arg2(Arg2_) {
    Arg1 = itos(Arg1_);  // Convert integer to string and assign to Arg1
}

// Overloaded constructor for Quad class, initializing with a float argument
Quad::Quad(string Result_, float Arg1_, string Op_, string Arg2_) :
    Result(Result_), Op(Op_), Arg2(Arg2_) {
    Arg1 = ftos(Arg1_);  // Convert float to string and assign to Arg1
}

// Print the representation of a quad (three-address code)
void Quad::Print() {
    // Handle different operations and format the output accordingly
    if (Op == "=")
        cout << Result << " = " << Arg1;  // Assignment operation
    else if (Op == "*=")
        cout << "*" << Result << " = " << Arg1;  // Dereference assignment
    else if (Op == "[]=")
        cout << Result << "[" << Arg1 << "]" << " = " << Arg2;  // Array assignment
    else if (Op == "=[]")
        cout << Result << " = " << Arg1 << "[" << Arg2 << "]";  // Array access
    else if (Op == "goto" || Op == "param" || Op == "return")
        cout << Op << " " << Result;  // Control flow and parameter passing
    else if (Op == "call")
        cout << Result << " = " << "call " << Arg1 << ", " << Arg2;  // Function call
    else if (Op == "label")
        cout << Result << ": ";  // Label declaration
    else if (Op == "+" || Op == "-" || Op == "*" || Op == "/" || Op == "%" || Op == "^" || Op == "|" || Op == "&" || Op == "<<" || Op == ">>")
        cout << Result << " = " << Arg1 << " " << Op << " " << Arg2;  // Arithmetic operations
    else if (Op == "==" || Op == "!=" || Op == "<" || Op == ">" || Op == "<=" || Op == ">=")
        cout << "if " << Arg1 << " " << Op << " " << Arg2 << " goto " << Result;  // Conditional jumps
    else if (Op == "= &" || Op == "= *" || Op == "= -" || Op == "= ~" || Op == "= !")
        cout << Result << " " << Op << Arg1;  // Unary operations
    else
        cout << "Unknown Operator";  // Handle unknown operations
}

// Print the entire list of quads in the QuadArray
void QuadArray::Print() {
    cout << nl;  // Print a newline for formatting
    cout << "______________________________________________________________________________________________________________________________________________" << nl << nl;
    cout << "Three Address Code : " << nl;  // Header for the three-address code
    cout << "______________________________________________________________________________________________________________________________________________" << nl << nl;

    int Counter = 0;  // Counter for indexing the quads

    // Iterate through the instruction list and print each quad
    for (vector<Quad>::iterator it = this->InstructionList.begin(); it != this->InstructionList.end(); it++, Counter++) {
        if (it->Op != "label") {
            cout << left << setw(4) << Counter << ":    ";  // Print counter for non-label quads
            it->Print();  // Call Print method for the quad
        } else {
            cout << nl << left << setw(4) << Counter << ":";  // Print label counter
            it->Print();  // Call Print method for the label quad
        }
        cout << nl;  // Print a newline after each quad
    }
}

// Emit a new quad with string arguments
void QuadArray::Emit(string Op_, string Result_, string Arg1_, string Arg2_) {
    // Create a new Quad object and add it to the instruction list
    Quad* Q = new Quad(Result_, Arg1_, Op_, Arg2_);
    QuadList.InstructionList.push_back(*Q);  // Store the quad in the instruction list
}

// Overloaded Emit method for integer arguments
void QuadArray::Emit(string Op_, string Result_, int Arg1_, string Arg2_) {
    // Create a new Quad object with an integer argument and add it to the instruction list
    Quad* Q = new Quad(Result_, Arg1_, Op_, Arg2_);
    QuadList.InstructionList.push_back(*Q);  // Store the quad in the instruction list
}

// Overloaded Emit method for float arguments
void QuadArray::Emit(string Op_, string Result_, float Arg1_, string Arg2_) {
    // Create a new Quad object with a float argument and add it to the instruction list
    Quad* Q = new Quad(Result_, Arg1_, Op_, Arg2_);
    QuadList.InstructionList.push_back(*Q);  // Store the quad in the instruction list
}
// Create a list containing a single integer
list<int> MakeList(int i) {
    list<int> l(1, i);  // Initialize a list with one element, 'i'
    return l;           // Return the list
} 

// Merge two lists of integers
list<int> Merge(list<int> &p1, list<int> &p2) {
    p1.merge(p2);  // Merge p2 into p1
    return p1;     // Return the merged list
}

// Backpatch the list 'p' by replacing the addresses with the given integer 'i'
void BackPatch(list<int> &p, int i) {
    string S = itos(i);  // Convert integer to string for replacement
    // Iterate over each index in the list and replace Result in QuadList
    for (list<int>::iterator it = p.begin(); it != p.end(); it++) {
        // Set the Result of the corresponding Quad to the new value
        QuadList.InstructionList[*it].Result = S;
    }
}

// Check if the types of two symbols are compatible
bool TypeCheck(Symbol* &E1, Symbol* &E2) {
    SType* Type1 = E1->Type;  // Get the type of the first symbol
    SType* Type2 = E2->Type;  // Get the type of the second symbol
    
    // First, check if the types are compatible
    if (TypeCheck(Type1, Type2)) return true;
    
    // Check for implicit conversion to float
    if (Type1->Type == "float" || Type2->Type == "float") {
        E1 = E1->Convert("float");  // Convert E1 to float
        E2 = E2->Convert("float");  // Convert E2 to float
        return true;
    }
    
    // Check for implicit conversion to int
    if (Type1->Type == "int" || Type2->Type == "int") {
        E1 = E1->Convert("int");  // Convert E1 to int
        E2 = E2->Convert("int");  // Convert E2 to int
        return true;
    }
    
    return false;  // No compatible types found
}

// Check if two SType objects are compatible
bool TypeCheck(SType* E1, SType* E2) {
    // If both types are null, they're compatible
    if (E1 == NULL & E2 == NULL) return true;
    
    // If one is null and the other is not, they're not compatible
    if (E1 == NULL | E2 == NULL) return false;
    
    // If types are different, they're not compatible
    if (E1->Type != E2->Type) return false;
    
    // Recursively check for array types
    return TypeCheck(E1->ArrType, E2->ArrType);
}

// TypeConvertor function to convert a symbol of one type to another
Symbol* TypeConvertor(Symbol* Old, string New) {
    // Generate a temporary symbol with the new type
    Symbol* Temp = SymbolTable::GenTemp(new SType(New));

    // Check if the current type of Old is "float"
    if (Old->Type->Type == "float") {
        if (New == "int") {
            // Emit a quad for conversion from float to int
            QuadArray::Emit("=", Temp->Name, "floattoint(" + Old->Name + ")");
            return Temp;  // Return the new temporary symbol
        }
        else if (New == "char") {
            // Emit a quad for conversion from float to char
            QuadArray::Emit("=", Temp->Name, "floattochar(" + Old->Name + ")");
            return Temp;  // Return the new temporary symbol
        }
        return Old;  // Return the original symbol if no conversion needed
    }

    // Check if the current type of Old is "int"
    else if (Old->Type->Type == "int") {
        if (New == "float") {
            // Emit a quad for conversion from int to float
            QuadArray::Emit("=", Temp->Name, "inttofloat(" + Old->Name + ")");
            return Temp;  // Return the new temporary symbol
        }
        else if (New == "char") {
            // Emit a quad for conversion from int to char
            QuadArray::Emit("=", Temp->Name, "inttochar(" + Old->Name + ")");
            return Temp;  // Return the new temporary symbol
        }
        return Old;  // Return the original symbol if no conversion needed
    }

    // Check if the current type of Old is "char"
    else if (Old->Type->Type == "char") {
        if (New == "float") {
            // Emit a quad for conversion from char to float
            QuadArray::Emit("=", Temp->Name, "chartofloat(" + Old->Name + ")");
            return Temp;  // Return the new temporary symbol
        }
        else if (New == "int") {
            // Emit a quad for conversion from char to int
            QuadArray::Emit("=", Temp->Name, "chartoint(" + Old->Name + ")");
            return Temp;  // Return the new temporary symbol
        }
        return Old;  // Return the original symbol if no conversion needed
    }

    // Return the original symbol if no conversion is required
    return Old;
}

// Return the size of the type represented by S
int SizeOfS(SType* S) {
    if (S->Type == "void")
        return _VOIDSIZE;  // Size of void
    else if (S->Type == "char")
        return _CHARSIZE;  // Size of char
    else if (S->Type == "int")
        return _INTSIZE;  // Size of int
    else if (S->Type == "ptr")
        return _POINTERSIZE;  // Size of pointer
    else if (S->Type == "float")
        return _FLOATSIZE;  // Size of float
    else if (S->Type == "arr")
        return S->Width * SizeOfS(S->ArrType);  // Size of array
    else if (S->Type == "func")
        return _FUNCSIZE;  // Size of function
    else {
        cout << "Unknown Type : " << S->Type << "\n";  // Error handling for unknown types
        return -1;  // Return -1 for error
    }
}

// Convert integer to string
string itos(int i) {
    stringstream s;  // Create a stringstream object
    s << i;          // Insert integer into the stream
    return s.str(); // Return the string representation
}

// Convert float to string
string ftos(float f) {
    stringstream s;                                                         // Create a stringstream object
    s << f;                                                                 // Insert float into the stream
    return s.str();                                                         // Return the string representation
}

// Check the type of S and return its string representation
string checkType(SType* S) {
    if (S == NULL) {
        return "null";                                                      // Return "null" if S is null
    }
    // Return the type if it's one of the known types
    if (S->Type == "void" || S->Type == "char" || S->Type == "int" || S->Type == "float" || S->Type == "block" || S->Type == "func") {
        return S->Type;
    }
    // Handle pointer and array types with their subtypes
    else if (S->Type == "ptr") {
        return S->Type + "(" + checkType(S->ArrType) + ")";
    }
    else if (S->Type == "arr") {
        return S->Type + "(" + checkType(S->ArrType) + "," + itos(S->Width) + ")";
    }
    else {
        return "unknown";                                                   // Return "unknown" for unrecognized types
    }
}

// Convert a boolean expression to an integer expression
Expression* btoi(Expression* E) {
    if (E->Type == "bool") {
        E->Location = SymbolTable::GenTemp(new SType("int"));               // Generate a temporary integer location
        BackPatch(E->TrueList, QuadList.InstructionList.size());            // Backpatch true list with current instruction size
        QuadArray::Emit("=", E->Location->Name, "true");                    // Emit quad for true
        QuadArray::Emit("goto", itos(QuadList.InstructionList.size() + 1)); // Emit quad for goto to next instruction
        BackPatch(E->FalseList, QuadList.InstructionList.size());           // Backpatch false list with current instruction size
        QuadArray::Emit("=", E->Location->Name, "false");                   // Emit quad for false
    }
    return E;                                                               // Return the modified expression
}

// Convert an integer expression to a boolean expression
Expression* itob(Expression* E) {
    if (E->Type != "bool") {
        E->FalseList = MakeList(QuadList.InstructionList.size());           // Create a list for false branch
        QuadArray::Emit("==", E->Location->Name, "0");                      // Emit quad to compare with 0
        E->TrueList = MakeList(QuadList.InstructionList.size());            // Create a list for true branch
        QuadArray::Emit("goto", "");                                        // Emit quad for goto without a target
    }
    return E;                                                               // Return the modified expression
}

int main()
{
    try {
        // Memory allocation code
        SymbolTableCount = 0;
        GlobalST = new SymbolTable("Global");
        CurrentST = GlobalST;
        BlockType = "";
        VarType = ""; 
        if (yyparse() != 0) 
        {
            cout << "Parsing failed due to syntax errors." << nl;
            return 0;
        }
    } catch (const std::bad_alloc& e) {
        cout << "Memory allocation failed: " << e.what() << nl;
        return 0;
    }

    GlobalST->Update();
    GlobalST->Print();
    cout << nl << nl;
    QuadList.Print();

    return 0;
}