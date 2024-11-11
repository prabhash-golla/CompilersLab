%{
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip> 
#include <vector>
#include <cstring> 
#include <list>

/*
    22CS30027
    Golla Meghanandh Manvith Prabhash
*/

using namespace std;

string nl = "\n";

int yylex();  // Function declaration for the lexer
void yyerror(string s); // Function declaration for error handling

int BlockCount = 1;
int TempCount = 1;

class Quad;
class QuadArray;

class Symbol
{
    public:
        string Name;
        int RegNum;
        bool changeVal;
        Symbol(string Name_, int RegNum=-1);
        void UpdateReg(int NewReg=-1);
        
};

void Symbol::UpdateReg(int NewReg)
{
    RegNum = NewReg;
}

Symbol::Symbol(string Name_, int RegNum_) :
    Name(Name_), RegNum(RegNum_){}

class SymbolTable
{
    public:
        list<Symbol> Table;
        Symbol* LookUp(string Name);
        void AddSymbol(string Name);
};

SymbolTable GlobalST;


void SymbolTable::AddSymbol(string Name) 
{
    // Search in the current symbol table
    for (list<Symbol>::iterator it = Table.begin(); it != Table.end(); it++) 
    {
        if (it->Name == Name) return;            // Return the symbol if found
    }
    Table.push_back(Symbol(Name));
    return;
}

Symbol* SymbolTable::LookUp(string Name) 
{
    // Search in the current symbol table
    for (auto it = Table.begin(); it != Table.end(); it++) 
    {
        if (it->Name == Name) return &(*it);            // Return the symbol if found
    }
    return NULL;
}


class QuadArray
{
    public:
        vector<Quad> InstructionList;  // List of quads (instructions)

        // Emit functions: Create quads for various operations
        static void Emit(string Op_, string Result_, string Arg1_ = "", string Arg2_ = "");
        static void Emit(string Op_, string Result_, int Arg1_, string Arg2_ = "");
        static void Emit(string Op_, string Result_, float Arg1_, string Arg2_ = "");
        void Print(FILE *file);                  // Print the quads in the instruction list
};

// Quad Class: Represents a single instruction (quad) in the intermediate code
class Quad
{
    public:
        int Index;                    // Index of the quad in the instruction list
        string Op;                    // Operation code (e.g., +, -, =)
        string Arg1;                  // First argument for the operation
        string Arg2;                  // Second argument for the operation
        string Result;                // Result of the operation

        // Constructors: Initialize the quad with various types of arguments
        Quad(string Result_, string Arg1_, string Op_ = "=", string Arg2_ = "");
        Quad(string Result_, int Arg1_, string Op_ = "=", string Arg2_ = "");
        Quad(string Result_, float Arg1_, string Op_ = "=", string Arg2_ = "");
        
        void Print(FILE* file);                 // Print the quad instruction
};

void Quad::Print(FILE* file)
{
    if (Op == "=")
        fprintf(file, "%s = %s", Result.c_str(), Arg1.c_str());  // Assignment operation
    else if (Op == "goto")
        fprintf(file, "%s %s", Op.c_str(), Result.c_str());  // Control flow and parameter passing
    else if (Op == "label")
        fprintf(file, "%s", Result.c_str());  // Label declaration
    else if (Op == "+" || Op == "-" || Op == "*" || Op == "/" || Op == "%")
        fprintf(file, "%s = %s %s %s", Result.c_str(), Arg1.c_str(), Op.c_str(), Arg2.c_str());  // Arithmetic operations
    else if (Op == "==" || Op == "!=" || Op == "<" || Op == ">" || Op == "<=" || Op == ">=")
        fprintf(file, "iffalse (%s %s %s) goto %s", Arg1.c_str(), Op.c_str(), Arg2.c_str(), Result.c_str());  // Conditional jumps
    else
        fprintf(file, "Unknown Operator");  // Handle unknown operations
}

// Print the entire list of quads in the QuadArray
void QuadArray::Print(FILE* file)
{
    int Counter = 1;  // Counter for indexing the quads
    fprintf(file, "\nBlock 1\n");

    // Iterate through the instruction list and print each quad
    for (auto it = InstructionList.begin(); it != InstructionList.end(); it++) {
        if (it->Op != "label") {
            fprintf(file, "\t%-4d:\t", Counter);  // Print counter for non-label quads
            it->Print(file);  // Call Print method for the quad
            fprintf(file, "\n");  // Print a newline after each quad
            Counter++;
        } else {
            it++;
            if (it != InstructionList.end()) {
                it--;
                fprintf(file, "\n%s", "");  // Print label counter
                it->Print(file);  // Call Print method for the label quad
                fprintf(file, "\n");  // Print a newline after each quad
            } else {
                it--;
            }
        }
    }
    fprintf(file, "\n\t%-4d: ", Counter);  // Print label counter at the end of the block
}

QuadArray QuadList;            // Array to hold quads (three-address code)

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

void BackPatch(int p, int i) {
    string S = itos(i);  // Convert integer to string for replacement
    // cout << p <<"Prabhash"<< i <<nl;
    QuadList.InstructionList[p-1].Result = S;
}

%}

// Union for the semantic values of tokens
%union {
    int num;   // Numeric value
    char* id;  // Identifier
    char* a;
    const char* b;
}

// Define the start symbol for parsing
%start LIST

// Token definitions with associated types
%token <num>  SET SUB ADD MUL DIV MOD LP RP WHEN LOOP_WHILE EQ NE LT GT LE GE
%token <id> IDEN NUMB

%type <a> ATOM EXPR
%type <b> OPER RELN
%type <num> M BOOL

%%


LIST :
    STMT 
    | STMT LIST

STMT :
    ASGN 
    | COND
    | LOOP

ASGN : LP SET IDEN ATOM RP 
        {
            GlobalST.AddSymbol($3);
            QuadArray::Emit("=",$3,$4);
        }

COND : LP WHEN BOOL B LIST RP B M
        {
            BackPatch($3,$8);
        }

B:
    {
        if(QuadList.InstructionList.back().Op!="label")
        {
            // cout << QuadList.InstructionList.back().Result<<nl;
            string temp = "Block "+ itos(++BlockCount);
            QuadArray::Emit("label",strdup(temp.c_str()));
        }
    }

LOOP : LP B M LOOP_WHILE BOOL B LIST RP M
        {
            QuadArray::Emit("goto",itos($3));
            if(QuadList.InstructionList.back().Op!="label")
            {
                // cout << QuadList.InstructionList.back().Result<<nl;
                string temp = "Block "+ itos(++BlockCount);
                QuadArray::Emit("label",strdup(temp.c_str()));
            }
            BackPatch($5,$9+1); //+1 added due to added goto to the Quad List
        }
M : 
    {
        $$ = QuadList.InstructionList.size()+2-BlockCount; 
    }

EXPR : LP OPER ATOM ATOM RP
        {
            std::string temp = "$" + itos(TempCount++);  
            QuadArray::Emit($2, temp, $3, $4);
            $$ = strdup(temp.c_str());  
            GlobalST.Table.push_back(Symbol($$));
        }

BOOL : LP RELN ATOM ATOM RP
        {
            if ($2 == "=") QuadArray::Emit("==","_",$3,$4);
            else QuadArray::Emit($2,"_",$3,$4); 
            $$ = QuadList.InstructionList.size();
        }

ATOM : IDEN 
    {
        GlobalST.AddSymbol($1);
        $$ = $1;
    }
    | NUMB {$$ = $1;}
    | EXPR {$$ = $1;}

OPER :
    ADD {$$ = "+";}
    | SUB {$$ = "-";}
    | MUL {$$ = "*";}
    | DIV {$$ = "/";}
    | MOD {$$ = "%";}

RELN :
    EQ {$$ = "=";}
    | NE {$$ = "!=";}
    | LT {$$ = "<";}
    | GT {$$ = ">";}
    | LE {$$ = "<=";}
    | GE {$$ = ">=";}
 
%%

// Error handling function
void yyerror(string s) 
{

}
