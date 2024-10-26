#ifndef _TINYC3_22CS30027_22CS30019_TRANSLATOR_H
#define _TINYC3_22CS30027_22CS30019_TRANSLATOR_H

// Import Required Headers
#include <iostream>
#include <string>
#include <vector>
#include <list>

#define _VOIDSIZE 0
#define _INTSIZE 4
#define _FLOATSIZE 8
#define _CHARSIZE 1
#define _POINTERSIZE 4
#define _FUNCSIZE 0

using namespace std;

// Define Required Classes
class SymbolTable;
class Symbol;
class SType;
class QuadArray;
class Quad;
class Expression;
class Statement;
class ArrayType;

//Global Variables
extern Symbol* RecentSymbol;
extern SymbolTable* CurrentST;
extern SymbolTable* GlobalST;
extern int SymbolTableCount;
extern string BlockType;
extern string VarType;
extern QuadArray QuadList;

// Expression Class
class Expression
{
    public:
        Symbol* Location;
        string Type;
        list<int> TrueList,FalseList;
        list<int> NextList;
};

// Statement Class
class Statement
{
    public:
        list<int> NextList;
};

// Array Class
class ArrayType
{
    public:
        string A_Type;
        Symbol* Location;
        Symbol* Array;
        SType* Type;
};


//Symbol Table Class
class SymbolTable
{
    public:
        string Name;                   // Name of the Symbol Table
        SymbolTable* PtrToParent;      // Pointer To Parent of the Symbol Table
        list<Symbol> Table;          // A Vector of Entries
        int NumTempVar;                // Int Number of temporary variables

        //Functions;
        //Constructor
        SymbolTable(string Name_,SymbolTable* Ptr_= NULL);
        void Print();
        void Update();
        Symbol* LookUp(string Name);
        static Symbol* GenTemp(string Type_,string InitialVal="");
        static Symbol* GenTemp(SType* Type_,string InitialVal="");

};


// Symbol Class
class Symbol
{
    public:
        string Name;                   // Name of the Identifier
        SType* Type;                   // Store The Type of the Identifier
        string InitialValue;           // Store Initial Value 
        int size;                      // Size of the Identifier
        int offset;                    // OFFSET of The Identifier
        SymbolTable* NestedTable;      // Pointer to the Nested Table
        
        //Functions
        //Constructor 
        Symbol(string Name_,string Type_="int",int Width_ = 0,SType* ArrType = NULL);
        Symbol* Convert(string S);
        Symbol* Update(SType* Type_);
};

// Symbol Type Class
class SType
{
    public:
        string Type;                   // Store The Type
        int Width;                     // Store Width
        SType* ArrType;                // Store Info About Array

        //Constructor
        SType(string Type_,int Width_=1,SType* ArrType_= NULL);
 
};

// Quad Array Class
class QuadArray
{
    public:
        vector<Quad> InstructionList;

        static void Emit(string Op_,string Result_,string Arg1_="",string Arg2_="");
        static void Emit(string Op_,string Result_,int Arg1_,string Arg2_="");
        static void Emit(string Op_,string Result_,float Arg1_,string Arg2_="");
        void Print();
};

// Quad Class
class Quad
{
    public:
        int Index;
        string Op;   
        string Arg1;
        string Arg2;
        string Result;

        //Constructor
        Quad(string Result_,string Arg1_,string Op_="=",string Arg2_="");
        Quad(string Result_,int Arg1_,string Op_="=",string Arg2_="");
        Quad(string Result_,float Arg1_,string Op_="=",string Arg2_="");
        void Print();

};

// Global Functions;

list<int> MakeList(int i);
list<int> Merge(list<int> &p1,list<int> &p2);
void BackPath(list<int> &p,int i);
bool TypeCheck(Symbol* &E1,Symbol* &E2);
bool TypeCheck(SType* E1,SType* E2);
int SizeOfS(SType* S);
string itos(int i);
string ftos(float f);
string checkType(SType* S);
Expression* itob(Expression* E);
Expression* btoi(Expression* E);

Symbol* TypeConvertor(Symbol* Old,string New);

#endif