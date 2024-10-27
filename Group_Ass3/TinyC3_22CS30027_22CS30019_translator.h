#ifndef _TINYC3_22CS30027_22CS30019_TRANSLATOR_H
#define _TINYC3_22CS30027_22CS30019_TRANSLATOR_H

// Import Required Headers
#include <iostream>
#include <string>
#include <vector>
#include <list>

// Define constants for sizes of various data types
#define _VOIDSIZE 0
#define _INTSIZE 4
#define _FLOATSIZE 8
#define _CHARSIZE 1
#define _POINTERSIZE 4
#define _FUNCSIZE 0

using namespace std;

// Forward declarations of required classes
class SymbolTable;
class Symbol;
class SType;
class QuadArray;
class Quad;
class Expression;
class Statement;
class ArrayType;

// Global Variables
extern Symbol* RecentSymbol;         // Pointer to the most recently used symbol
extern SymbolTable* CurrentST;       // Pointer to the current symbol table
extern SymbolTable* GlobalST;        // Pointer to the global symbol table
extern int SymbolTableCount;          // Count of symbol tables created
extern string BlockType;              // Type of the current block
extern string VarType;                // Type of the variable
extern QuadArray QuadList;            // Quad array to hold intermediate code

// Expression Class: Represents an expression in the intermediate code
class Expression
{
public:
    Symbol* Location;             // Pointer to the symbol location of the expression
    string Type;                  // Type of the expression (e.g., int, float)
    list<int> TrueList;          // List of quads for true branches
    list<int> FalseList;         // List of quads for false branches
    list<int> NextList;          // List of quads for next instructions
};

// Statement Class: Represents a statement in the intermediate code
class Statement
{
public:
    list<int> NextList;          // List of quads for next instructions
};

// ArrayType Class: Represents an array type in the symbol table
class ArrayType
{
public:
    string A_Type;                // Type of the array
    Symbol* Location;             // Pointer to the symbol representing the array
    Symbol* Array;                // Pointer to the actual array symbol
    SType* Type;                  // Pointer to the type of the array elements
};

// Symbol Table Class: Represents a symbol table for variable declarations
class SymbolTable
{
public:
    string Name;                  // Name of the symbol table
    SymbolTable* PtrToParent;     // Pointer to the parent symbol table
    list<Symbol> Table;           // A list of symbols in the table
    int NumTempVar;               // Count of temporary variables created

    // Constructor: Initializes the symbol table with a name and an optional parent
    SymbolTable(string Name_, SymbolTable* Ptr_ = NULL);
    
    // Functions
    void Print();                 // Print the contents of the symbol table
    void Update();                // Update the symbol table (implementation not shown)
    Symbol* LookUp(string Name);  // Look up a symbol by name and return it
    static Symbol* GenTemp(string Type_, string InitialVal = ""); // Generate a temporary symbol with a type and initial value
    static Symbol* GenTemp(SType* Type_, string InitialVal = ""); // Overloaded function to generate a temporary symbol using SType
};

// Symbol Class: Represents a symbol in the symbol table
class Symbol
{
public:
    string Name;                  // Name of the identifier (variable/function)
    SType* Type;                  // Pointer to the type of the identifier
    string InitialValue;          // Initial value of the identifier (if any)
    int size;                     // Size of the identifier in bytes
    int offset;                   // Offset of the identifier in the symbol table
    SymbolTable* NestedTable;     // Pointer to the nested symbol table (if any)

    // Constructor: Initializes the symbol with a name, type, width, and optional array type
    Symbol(string Name_, string Type_ = "int", int Width_ = 0, SType* ArrType = NULL);
    
    // Functions
    Symbol* Convert(string S);    // Convert the symbol to a specified type
    Symbol* Update(SType* Type_); // Update the symbol's type
};

// SType Class: Represents a data type in the language
class SType
{
public:
    string Type;                  // Type name (e.g., int, float, etc.)
    int Width;                    // Width of the type in bytes
    SType* ArrType;               // Pointer to array type information (if applicable)

    // Constructor: Initializes the SType with a type name, width, and optional array type
    SType(string Type_, int Width_ = 1, SType* ArrType_ = NULL);
};

// QuadArray Class: Represents an array of quads for intermediate code
class QuadArray
{
public:
    vector<Quad> InstructionList;  // List of quads (instructions)

    // Emit functions: Create quads for various operations
    static void Emit(string Op_, string Result_, string Arg1_ = "", string Arg2_ = "");
    static void Emit(string Op_, string Result_, int Arg1_, string Arg2_ = "");
    static void Emit(string Op_, string Result_, float Arg1_, string Arg2_ = "");
    void Print();                  // Print the quads in the instruction list
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
    
    void Print();                 // Print the quad instruction
};

// Global Functions

// Create a list containing a single integer
list<int> MakeList(int i);

// Merge two lists of integers and return the merged list
list<int> Merge(list<int> &p1, list<int> &p2);

// Backpatch the list 'p' with a specified integer
void BackPatch(list<int> &p, int i);

// Check if two symbols are of compatible types
bool TypeCheck(Symbol* &E1, Symbol* &E2);

// Check if two SType objects are of compatible types
bool TypeCheck(SType* E1, SType* E2);

// Return the size of a specified SType
int SizeOfS(SType* S);

// Convert integer to string
string itos(int i);

// Convert float to string
string ftos(float f);

// Check the type of S and return its string representation
string checkType(SType* S);

// Convert an integer expression to a boolean expression
Expression* itob(Expression* E);

// Convert a boolean expression to an integer expression
Expression* btoi(Expression* E);

// Convert a symbol from one type to another
Symbol* TypeConvertor(Symbol* Old, string New);

#endif
