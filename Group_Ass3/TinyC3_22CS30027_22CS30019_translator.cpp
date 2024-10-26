#include<iostream>
#include "TinyC3_22CS30027_22CS30019_translator.h"
#include <fstream>
#include <sstream>
#include <stack>
#include <iomanip> 
#include "lex.yy.c"
#include "y.tab.c" 
using namespace std;
/*
    Group :- TinyC-67
    Golla Meghanandh Manvith Prabhash :- 22CS30027
    Darapu Adhithya  :- 22CS30019
*/

const char nl = '\n';

//Global Variables
QuadArray QuadList;
Symbol* RecentSymbol;
SymbolTable* CurrentST;
SymbolTable* GlobalST;
int SymbolTableCount;

string BlockType;
string VarType;

SType::SType(string Type_,int Width_,SType* ArrType_):
Type(Type),Width(Width_),ArrType(ArrType_) {}

Symbol::Symbol(string Name_,string Type_,int Width_,SType* ArrType):
Name(Name_),offset(0),NestedTable(NULL),InitialValue("-")
{
    Type = new SType(Type_,Width_,ArrType);
    size = SizeOfS(Type);
}

Symbol* Symbol::Update(SType* Type_)
{
    Type = Type_;
    size = SizeOfS(Type_);
    return this;
}

SymbolTable::SymbolTable(string Name_,SymbolTable* Ptr_): Name(Name_),NumTempVar(0){}

Symbol* SymbolTable::GenTemp(SType* Type_,string InitialVal)
{
    string Name = "t" + itos(CurrentST->NumTempVar++);
    Symbol* S = new Symbol(Name);
    S->Type = Type_;
    S->InitialValue = InitialVal;
    S->size = SizeOfS(Type_);
    CurrentST->Table.push_back(*S);
    return &(CurrentST->Table.back());
}

Symbol* SymbolTable::GenTemp(string Type_,string InitialVal)
{
    string Name = "t" + itos(CurrentST->NumTempVar++);
    Symbol* S = new Symbol(Name);
    SType* TempType = new SType(Type_);
    S->Type = TempType;
    S->InitialValue = InitialVal;
    S->size = SizeOfS(TempType);
    CurrentST->Table.push_back(*S);
    return &(CurrentST->Table.back());
}

Symbol* Symbol::Convert(string S)
{
    bool B = (this->Type->Type == S);
    Symbol* Temp = SymbolTable::GenTemp(S);
    if(!B) 
    {
        QuadArray::Emit("=",Temp->Name,this->Type->Type+"to"+S+"("+this->Name+")");
    }
    else 
    {
        QuadArray::Emit("=",Temp->Name,this->Name);
    }
    return Temp;
}

Symbol* SymbolTable::LookUp(string Name)
{
    for(list<Symbol>::iterator it = Table.begin();it!=Table.end();it++)
    {
        if(it->Name==Name) return &(*it);
    }

    Symbol* S = NULL;
    if(this->PtrToParent!=NULL)
    {
        S = this->PtrToParent->LookUp(Name);
    }
    if(CurrentST==this && S==NULL)
    {
        S = new Symbol(Name);
        Table.push_back(*S);
        return &(Table.back());
    }
    return S;
}


void SymbolTable::Print()
{
    cout << nl;
    cout << "Symbol Table Name : " << this->Name << nl;
    cout << "Parent : " << ((this->PtrToParent != NULL) ? this->PtrToParent->Name : "NULL") << nl;
    cout << nl;
    cout << setfill(' ') << left << setw(25) <<  "Name";
    cout << left << setw(25) << "Type";
    cout << left << setw(20) << "Initial Value";
    cout << left << setw(15) << "Size";
    cout << left << setw(15) << "Offset";
    cout << left << "Nested" << nl;

    list<SymbolTable*> Tab;
    for(auto it = this->Table.begin(); it != this->Table.end(); it++) 
    {
        cout << left << setw(25) << it->Name;
        cout << left << setw(25) << checkType(it->Type);
        cout << left << setw(20) << (it->InitialValue != "" ? it->InitialValue : "-");
        cout << left << setw(15) << it->size;
        cout << left << setw(15) << it->offset;
        cout << left;

        if(it->NestedTable != NULL) 
        {
            cout << it->NestedTable->Name << nl;
            Tab.push_back(it->NestedTable);
        }
        else 
        {
            cout << "NULL" << nl;
        }
    }
    cout << nl;
    for(auto it = Tab.begin(); it != Tab.end(); it++) 
    {
        (*it)->Print();
        cout<<nl;
    }
}

void SymbolTable::Update()
{
    list<SymbolTable*> TableList;
    int offset;
    for(list<Symbol>::iterator it = this->Table.begin();it!=this->Table.end();it++)
    {
        if(it==this->Table.begin())
        {
            offset = it->size;
        }
        else
        {
            it->offset = offset;
            offset += it->size;
        }
        if(it->NestedTable!=NULL) 
        {
            TableList.push_back(it->NestedTable);
        }
    }
    for(auto it = TableList.begin();it!=TableList.end();it++)
    {
        (*it)->Update();
    }
}

Quad::Quad(string Result_,string Arg1_,string Op_,string Arg2_):
Result(Result_),Op(Op_),Arg1(Arg1_),Arg2(Arg2_) {}

Quad::Quad(string Result_,int Arg1_,string Op_,string Arg2_):
Result(Result_),Op(Op_),Arg2(Arg2_) 
{
    Arg1 = itos(Arg1_);
}

Quad::Quad(string Result_,float Arg1_,string Op_,string Arg2_):
Result(Result_),Op(Op_),Arg2(Arg2_) 
{
    Arg1 = ftos(Arg1_);
}

void Quad::Print()
{
    if(Op == "=")
        cout << Result << " = " << Arg1;
    else if(Op == "*=")
        cout << "*" << Result << " = " << Arg1;
    else if(Op == "[]=")
        cout << Result << "[" << Arg1 << "]" << " = " << Arg2;
    else if(Op == "=[]")
        cout << Result << " = " << Arg1 << "[" << Arg2 << "]";
    else if(Op == "goto" || Op == "param" || Op == "return")
        cout << Op << " " << Result;
    else if(Op == "call")
        cout << Result << " = " << "call " << Arg1 << ", " << Arg2;
    else if(Op == "label")
        cout << Result << ": ";
    else if(Op == "+" || Op == "-" || Op == "*" || Op == "/" || Op == "%" || Op == "^" || Op == "|" || Op == "&" || Op == "<<" || Op == ">>")
        cout << Result << " = " << Arg1 << " " << Op << " " << Arg2;
    else if(Op == "==" || Op == "!=" || Op == "<" || Op == ">" || Op == "<=" || Op == ">=")
        cout << "if " << Arg1 << " " << Op << " " << Arg2 << " goto " << Result;
    else if(Op == "= &" || Op == "= *" || Op == "= -" || Op == "= ~" || Op == "= !")
        cout << Result << " " << Op << Arg1;
    else
        cout << "Unknown Operator";
}

void QuadArray::Print()
{
    cout << nl;
    cout << "Three Adress Code : " << nl;
    cout << nl;
    int Counter = 0;

    for(vector<Quad>::iterator it = this->InstructionList.begin();it!=this->InstructionList.end();it++,Counter++)
    {
        cout << Counter << ":  ";
        it->Print();
        cout << nl;
    }
}

void QuadArray::Emit(string Op_,string Result_,string Arg1_,string Arg2_)
{
    // cout << Arg1_ << endl;
    Quad* Q = new Quad(Result_,Arg1_,Op_,Arg2_);
    QuadList.InstructionList.push_back(*Q);
}

void QuadArray::Emit(string Op_,string Result_,int Arg1_,string Arg2_)
{
    // cout << Arg1_ << endl;
    Quad* Q = new Quad(Result_,Arg1_,Op_,Arg2_);
    QuadList.InstructionList.push_back(*Q);
}

void QuadArray::Emit(string Op_,string Result_,float Arg1_,string Arg2_)
{
    // cout << Arg1_ << endl;
    Quad* Q = new Quad(Result_,Arg1_,Op_,Arg2_);
    QuadList.InstructionList.push_back(*Q);
}

list<int> MakeList(int i)
{
    list<int> l(1,i);
    return l;
} 

list<int>* Merge(list<int> &p1,list<int> &p2)
{
    p1.merge(p2);
    return &p1;
}

void BackPath(list<int> &p,int i)
{
    string S = itos(i);
    for(list<int>::iterator it = p.begin();it != p.end();it++)
    {
        QuadList.InstructionList[*it].Result=S;
    }
}

bool TypeCheck(Symbol* &E1,Symbol* &E2)
{
    SType* Type1 = E1->Type;
    SType* Type2 = E2->Type;
    if(TypeCheck(Type1,Type2)) return true;
    if(Type1->Type=="float" || Type2->Type=="float")
    {
        E1 = E1->Convert("float");
        E2 = E2->Convert("float");
        return true;
    }
    if(Type1->Type=="int" || Type2->Type=="int")
    {
        E1 = E1->Convert("int");
        E2 = E2->Convert("int");
        return true;
    }
    return false;
}

bool TypeCheck(SType* E1,SType* E2)
{
    if(E1==NULL & E2==NULL) return true;
    if(E1==NULL | E2==NULL) return false;
    if(E1->Type!=E2->Type) return false;
    return TypeCheck(E1->ArrType,E2->ArrType);
}
// TypeConvertor function to convert a symbol of one type to another type 
Symbol* TypeConvertor(Symbol* Old, string New) {
    // Generate a temporary symbol with the new type
    Symbol* Temp = SymbolTable::GenTemp(new SType(New));

    // Check if the current type of Old is "float"
    if (Old->Type->Type == "float") {
        if (New == "int") {
            QuadArray::Emit("=", Temp->Name, "floattoint(" + Old->Name + ")");
            return Temp;
        }
        else if (New == "char") {
            QuadArray::Emit("=", Temp->Name, "floattochar(" + Old->Name + ")");
            return Temp;
        }
        return Old;
    }

    // Check if the current type of Old is "int"
    else if (Old->Type->Type == "int") {
        if (New == "float") {
            QuadArray::Emit("=", Temp->Name, "inttofloat(" + Old->Name + ")");
            return Temp;
        }
        else if (New == "char") {
            QuadArray::Emit("=", Temp->Name, "inttochar(" + Old->Name + ")");
            return Temp;
        }
        return Old;
    }

    // Check if the current type of Old is "char"
    else if (Old->Type->Type == "char") {
        if (New == "float") {
            QuadArray::Emit("=", Temp->Name, "chartofloat(" + Old->Name + ")");
            return Temp;
        }
        else if (New == "int") {
            QuadArray::Emit("=", Temp->Name, "chartoint(" + Old->Name + ")");
            return Temp;
        }
        return Old;
    }

    // Return original symbol if no conversion is required
    return Old;
}

int SizeOfS(SType* S)
{
    if(S->Type == "void")
        return _VOIDSIZE;
    else if(S->Type == "char")
        return _CHARSIZE;
    else if(S->Type == "int")
        return _INTSIZE;
    else if(S->Type == "ptr")
        return _POINTERSIZE;
    else if(S->Type == "float")
        return _FLOATSIZE;
    else if(S->Type == "arr")
        return S->Width * SizeOfS(S->ArrType);
    else if(S->Type == "func")
        return _FUNCSIZE;
    else
        return -1;
}

string itos(int i)
{
    stringstream s;
    s << i;
    return s.str();
}

string ftos(float f)
{
    stringstream s;
    s << f;
    return s.str();
}

string checkType(SType* S)
{
     if(S==NULL)
    {
        return "null";
    }
    if(S->Type == "void" || S->Type == "char" || S->Type == "int" || S->Type == "float" || S->Type == "block" || S->Type == "func")
    {
        return S->Type;
    }
    else if(S->Type == "ptr")
    {
        return S->Type + "(" + checkType(S->ArrType) + ")";
    }
    else if(S->Type == "arr")
    {
        return S->Type + "(" + checkType(S->ArrType) + "," + itos(S->Width) + ")";
    }
    else
    return "unknown";
}

Expression* btoi(Expression* E)
{
    if(E->Type=="bool")
    {
        E->Location = SymbolTable::GenTemp(new SType("int"));
        BackPath(E->TrueList,QuadList.InstructionList.size());
        QuadArray::Emit("=",E->Location->Name,"true");
        QuadArray::Emit("goto",itos(QuadList.InstructionList.size()+1));
        BackPath(E->FalseList,QuadList.InstructionList.size());
        QuadArray::Emit("=",E->Location->Name,"false");
    }
    return E;
}

Expression* itob(Expression* E)
{
    if(E->Type!="bool")
    {
        E->FalseList  = MakeList(QuadList.InstructionList.size());
        QuadArray::Emit("==",E->Location->Name,"0");
        E->TrueList  = MakeList(QuadList.InstructionList.size());
        QuadArray::Emit("goto","");
    }
    return E;
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
        yyparse();
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
        return 0;
    }


    GlobalST->Update();
    GlobalST->Print();
    cout << nl << nl;
    QuadList.Print();

    return 0;
}