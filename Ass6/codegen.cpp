#include <iostream>
#include <map>
#include "y.tab.c"
#include "lex.yy.c"
#include <unordered_map>
using namespace std;

/*
    22CS30027
    Golla Meghanandh Manvith Prabhash
*/

class AssemblyCode 
{
    public:
        string op;
        string R1;
        string R2;
        string R3;
    AssemblyCode(string op_,string R1_,string R2_,string R3_);
    void printAC(FILE* file);
};

AssemblyCode::AssemblyCode(string op_,string R1_,string R2_,string R3_):op(op_),R1(R1_),R2(R2_),R3(R3_) {}

list<AssemblyCode> TCA;

void EmitTCG(string op_,string R1_="",string R2_="",string R3_="")
{
    // cout << op_ << " " << R1_ << " " << R2_ << " "<< R3_ <<endl;
    TCA.push_back(AssemblyCode(op_,R1_,R2_,R3_));
}

unordered_map<string,int> LastLine,Coress;

void AssemblyCode::printAC(FILE* file)
{
    if (op == "LD")
        fprintf(file, "LD %s %s", R1.c_str(), R2.c_str());
    else if (op == "LDI")
        fprintf(file, "LDI %s %s", R1.c_str(), R2.c_str());   
    else if (op == "ST")
        fprintf(file, "ST %s %s", R1.c_str(), R2.c_str());   
    else if (op == "+")
        fprintf(file, "ADD %s %s %s", R1.c_str(), R2.c_str(), R3.c_str());
    else if (op == "-")
        fprintf(file, "SUB %s %s %s", R1.c_str(), R2.c_str(), R3.c_str());
    else if (op == "*")
        fprintf(file, "MUL %s %s %s", R1.c_str(), R2.c_str(), R3.c_str());
    else if (op == "/")
        fprintf(file, "DIV %s %s %s", R1.c_str(), R2.c_str(), R3.c_str());
    else if (op == "%")
        fprintf(file, "REM %s %s %s", R1.c_str(), R2.c_str(), R3.c_str());
    else if (op == "==")
        fprintf(file, "JNE %s %s %d", R2.c_str(), R3.c_str(),Coress[R1]);
    else if (op == "!=")
        fprintf(file, "JEQ %s %s %d", R2.c_str(), R3.c_str(),Coress[R1]);
    else if (op == "<")
        fprintf(file, "JGE %s %s %d", R2.c_str(), R3.c_str(),Coress[R1]);
    else if (op == ">")
        fprintf(file, "JLE %s %s %d", R2.c_str(), R3.c_str(),Coress[R1]);
    else if (op == ">=")
        fprintf(file, "JLT %s %s %d", R2.c_str(), R3.c_str(),Coress[R1]);
    else if (op == "<=")
        fprintf(file, "JGT %s %s %d", R2.c_str(), R3.c_str(),Coress[R1]);
    else if (op == "label")
        fprintf(file, "%s", R1.c_str());
    else if (op == "JMP")
        fprintf(file, "JMP %d", Coress[R1]);
    else
        fprintf(file, "Unknown Operator %s",op.c_str());
}

void printTCG(FILE* file)
{
    int Counter = 1;
    for (list<AssemblyCode>::iterator it = TCA.begin(); it != TCA.end(); it++) 
    {
        if (it->op != "label") 
        {
            fprintf(file, "\t%-4d:\t", Counter);  // Print counter for non-label quads
            it->printAC(file);  // Call Print method for the quad
            fprintf(file, "\n");  // Print a newline after each quad
            Counter++;
        } 
        else 
        {
            it++;
            if (it != TCA.end()) {
                it--;
                fprintf(file, "\n%s", "");  // Print label counter
                it->printAC(file);  // Call Print method for the label quad
                fprintf(file, "\n");  // Print a newline after each quad
            } else {
                it--;
            }
        }
    }
    fprintf(file, "\n\t%-4d: ", Counter);
}


class Register
{
    public:
        vector<Symbol*> Symbols;
        bool LastUse;
        int Score;
        Register() : LastUse(true),Score(0) {Symbols.resize(0);}; 
};

// Structure to track register allocation
class RegisterBank 
{   
    private:
        vector<int> allocateRegister(Symbol* Arg1,Symbol* Arg2,int LineNo) 
        {
            vector<int> Assigned(2);
            if(Arg1!=NULL) 
            {
                // cout << Arg1->Name << " "<< Arg1->RegNum << endl; 
                Assigned[0] = Arg1->RegNum;
            }
            else 
            {
                Assigned[0] = NumReg+1;
            }

            if(Arg2!=NULL) 
            {
                // cout << Arg2->Name << " "<< Arg2->RegNum << endl;
                Assigned[1] = Arg2->RegNum;
            }
            else 
            {
                Assigned[1] = NumReg+1;
            }

            int cantuse,more;  

            // Method 1
            // If A is already residing in a register, use that register. There is no need to load A again from memory.
            // cout << "Prabhash1 "<<  endl;
            if( Assigned[0]!=-1 && Assigned[1]!=-1 ) 
            {   
                // cout << Assigned[0] << "dfkjg" << endl;
                return Assigned;
            }
            else if ( Assigned[1]!=-1 ) 
            {
                // cout << "gfvjv "<< Assigned[1] << endl;
                cantuse=Assigned[1]-1;
                more=0;
            }
            else if ( Assigned[0]!=-1 ) 
            {
                // cout << "gfvdfkgcjv " << endl;
                cantuse=Assigned[0]-1;
                more=1;
            }
            else 
            {
                // cout << "Prabdsjk" << endl;
                cantuse=-1;
                more=-1;
            }
            // cout << cantuse << "cant use " << more << "more";

            // Method 2
            // If there is some free register, load A to that register.
            // cout << "Prabhash2" << endl;
            for(int i=0;i<NumReg;i++)
            {
                if(i==cantuse) continue;
                if(Reg[i].Symbols.size()!=0) continue;
                if(more != -1)
                {
                    // cout << i+1 << "dfkjg";
                    Assigned[more] = i+1;
                    return Assigned;
                }
                else 
                {
                    // cout << i+1 << "Pra";
                    cantuse = i;
                    more = 1;
                    Assigned[0] = i+1;
                }
            }

            // Method 3
            //If there is a register such that all the variables and temporaries stored in that register have latest values in
            //memory, load A to that register, after deleting that register from the storage locations of all those variables and
            //temporaries.
            // cout << "Prabhash3" << endl;
            for(int i=0;i<NumReg;i++)
            {
                if(i==cantuse) continue;
                if(!Reg[i].LastUse) continue;

                for(vector<Symbol*>::iterator SymIt = Reg[i].Symbols.begin(); SymIt<Reg[i].Symbols.end();SymIt++)
                {
                    (*SymIt)->RegNum =-1;
                }
                Reg[i].Symbols.clear();
                Reg[i].LastUse = true;
                Reg[i].Score = 0;
                
                if(more !=-1)
                {
                    Assigned[more] = i+1;
                    return Assigned;
                }
                else 
                {
                    cantuse = i;
                    more = 1;
                    Assigned[0] = i+1;
                }
            }


            // Method 4
            // If T and A are the same, and only T is stored in some register, use that register for A. Load A to that register,
            // and use the same register for T.

            // Method 5
            // If there is a register containing only temporaries, neither of which will be used in the rest of the block, load A to
            // that register after freeing that register.
            // cout << "Prabhash5" << endl;
            for(int i=0;i<NumReg;i++)
            {
                if(i==cantuse) continue;
                bool available = true;

                for(vector<Symbol*>::iterator SymIt = Reg[i].Symbols.begin(); SymIt<Reg[i].Symbols.end();SymIt++)
                {
                    if((*SymIt)->Name[0]!='$' || LastLine[(*SymIt)->Name]>LineNo+1) 
                    {
                        available = false;
                        break;
                    }
                }
                // cout << i << available << endl;
                if(!available) continue;
                Reg[i].Symbols.clear();
                Reg[i].LastUse=true;
                Reg[i].Score=0;
                for(vector<Symbol*>::iterator SymIt = Reg[i].Symbols.begin(); SymIt<Reg[i].Symbols.end();SymIt++)
                {
                    (*SymIt)->RegNum = -1;
                }
                if(more != -1)
                {
                    Assigned[more] = i+1;
                    return Assigned;
                }
                else 
                {
                    cantuse = i;
                    more = 1;
                    Assigned[0] = i+1;
                }
            }

            // Method 6
            // The score of a register is the number of variables and temporaries stored in that register, whose latest values
            // are not available in memory. Find a register with the least score. For that register, save all unsaved variables
            // and temporaries to memory. Free that register, and load A to that register.
            // cout << "Prabhash6" << endl;
            int minscore = INT32_MAX;
            int min = -1;
            for(int i =0;i<NumReg;i++)
            {
                if(i==cantuse) continue;
                if(Reg[i].Score>=minscore) continue;
                minscore = Reg[i].Score;
                min = i;
            }
            for(vector<Symbol*>::iterator SymIt = Reg[min].Symbols.begin(); SymIt<Reg[min].Symbols.end();SymIt++)
            {
                EmitTCG("ST",(*SymIt)->Name,"R"+itos((*SymIt)->RegNum));
                (*SymIt)->RegNum = -1;
                (*SymIt)->changeVal = true;
            }

            Reg[min].Symbols.clear();
            Reg[min].LastUse=true;
            Reg[min].Score=0;
            if(more != -1)
            {
                Assigned[more] = min+1;  
                return Assigned;
            }
            else 
            {
                cantuse = min;
                more = 1;
                Assigned[0] = min+1;
            }

            minscore = INT32_MAX;
            min = -1;
            for(int i =0;i<NumReg;i++)
            {
                if(i==cantuse) continue;
                if(Reg[i].Score>=minscore) continue;
                minscore = Reg[i].Score;
                min = i;
            }
            for(vector<Symbol*>::iterator SymIt = Reg[min].Symbols.begin(); SymIt<Reg[min].Symbols.end();SymIt++)
            {
                EmitTCG("ST",(*SymIt)->Name,"R"+itos((*SymIt)->RegNum));
                (*SymIt)->RegNum = -1;
                (*SymIt)->changeVal = true;
            }
            Reg[min].Symbols.clear();
            Reg[min].LastUse=true;
            Reg[min].Score=0;
            Assigned[more]=min+1;
            return Assigned;
        }

        int allocateRegister(Symbol* Arg1,int LineNo)
        {
            // Method 1
            // If A is already residing in a register, use that register. There is no need to load A again from memory.
            // cout << "Golla1" << endl;
            if(Arg1->RegNum!=-1)
            {
                if(Reg[Arg1->RegNum-1].Symbols.size()==1)
                {
                    return Arg1->RegNum;
                }
            }

            // cout << "Golla2" << endl;
            // Method 2
            // If there is some free register, load A to that register.

            for(int i=0;i<NumReg;i++)
            {
                if(!Reg[i].Symbols.size()) return i+1;
            }

            // cout << "Golla3" << endl;
            // Method 3
            //If there is a register such that all the variables and temporaries stored in that register have latest values in
            //memory, load A to that register, after deleting that register from the storage locations of all those variables and
            //temporaries.

            for(int i=0;i<NumReg;i++)
            {
                if(!Reg[i].LastUse) continue;
                for(vector<Symbol*>::iterator SymIt = Reg[i].Symbols.begin(); SymIt<Reg[i].Symbols.end();SymIt++)
                {
                    (*SymIt)->RegNum =-1;
                }
                Reg[i].Symbols.clear();
                Reg[i].LastUse = true;
                Reg[i].Score = 0;

                return i+1;
            }

            // Method 4
            // If T and A are the same, and only T is stored in some register, use that register for A. Load A to that register,
            // and use the same register for T.

            // cout << "Golla5" << endl;
            // Method 5
            // If there is a register containing only temporaries, neither of which will be used in the rest of the block, load A to
            // that register after freeing that register.

            for(int i=0;i<NumReg;i++)
            {
                bool available = true;

                for(vector<Symbol*>::iterator SymIt = Reg[i].Symbols.begin(); SymIt<Reg[i].Symbols.end();SymIt++)
                {
                    // cout << i <<(*SymIt)->Name << " " ;
                    // cout << LastLine[(*SymIt)->Name] << " " << LineNo << " " << endl; 
                    if((*SymIt)->Name[0]!='$' || LastLine[(*SymIt)->Name]>LineNo+1) 
                    {
                        // cout << (*SymIt)->Name << "dfhghiujkfc"<< endl;
                        available = false;
                        break;
                    }
                }

                if(!available) continue; 
                for(vector<Symbol*>::iterator SymIt = Reg[i].Symbols.begin(); SymIt<Reg[i].Symbols.end();SymIt++)
                {
                    (*SymIt)->RegNum = -1;
                }
                // cout << "Case 5 " << i << endl;
                Reg[i].Symbols.clear();
                Reg[i].LastUse=true;
                Reg[i].Score=0;
                return i+1;
            
            }

            
            // cout << "Golla6" << endl;
            // Method 6
            // The score of a register is the number of variables and temporaries stored in that register, whose latest values
            // are not available in memory. Find a register with the least score. For that register, save all unsaved variables
            // and temporaries to memory. Free that register, and load A to that register.

            int minscore = Reg[0].Score;
            int min = 0;
            for(int i =1;i<NumReg;i++)
            {
                if(Reg[i].Score>=minscore) continue;
                minscore = Reg[i].Score;
                min = i;
            }
            for(vector<Symbol*>::iterator SymIt = Reg[min].Symbols.begin(); SymIt!=Reg[min].Symbols.end();SymIt++)
            {
                EmitTCG("ST",(*SymIt)->Name,"R"+itos((*SymIt)->RegNum));
                (*SymIt)->RegNum = -1;
                (*SymIt)->changeVal = true;
            }

            Reg[min].Symbols.clear();
            Reg[min].LastUse=true;
            Reg[min].Score=0;
            return min+1;
        }

    public:
        vector<Register> Reg;
        int NumReg;
        RegisterBank(int Num=5) :NumReg(Num) {Reg.resize(Num);}

        void AllocRegister(Symbol* Arg1,string &RegName1,int LineNo,int type=0)
        {
            int res = allocateRegister(Arg1,LineNo);
            RegName1 = "R"+itos(res);
            if(Arg1->RegNum!=-1 && type==1)
            {
                for(vector<Symbol*>::iterator SymIt = Reg[Arg1->RegNum-1].Symbols.begin(); SymIt<Reg[Arg1->RegNum-1].Symbols.end();SymIt++)
                {
                    if((*SymIt)->Name==Arg1->Name)
                    {
                        Reg[Arg1->RegNum-1].Symbols.erase(SymIt);
                        break;
                    }
                }
            }
            if(Arg1!=NULL)
            Arg1->UpdateReg(res);
            Reg[res-1].Symbols.push_back(Arg1);
            Reg[res-1].LastUse=false;
            Arg1->changeVal = false;
            Reg[res-1].Score=1;
            return;
        }
        void AllocRegister(Symbol* Arg1,Symbol* Arg2,string &RegName1,string &RegName2,int LineNo)
        {
            vector<int> Assigned = allocateRegister(Arg1,Arg2,LineNo);
            if(Arg1!=NULL && Arg1->RegNum==-1) 
            {
                RegName1 = "R"+itos(Assigned[0]); 
                // cout << RegName1 << endl;
                Reg[Assigned[0]-1].Symbols.push_back(Arg1);
                Arg1 ->UpdateReg(Assigned[0]); 
                // cout << Arg1->Name << "dfklg" ;
                EmitTCG("LD",RegName1,Arg1->Name);
            }
            else if(Arg1!=NULL)
            {
                RegName1 = "R"+itos(Assigned[0]);
            }
            if(Arg2!=NULL && Arg2->RegNum==-1) 
            { 
                RegName2 = "R"+itos(Assigned[1]);
                // cout << RegName2 << endl;
                Reg[Assigned[1]-1].Symbols.push_back(Arg2);
                Arg2 ->UpdateReg(Assigned[1]); 
                // cout << Arg1->Name << "dfklg" ;
                EmitTCG("LD",RegName2,Arg2->Name);
            }
            else if(Arg2!=NULL)
            {
                RegName2 = "R"+itos(Assigned[1]);
            }
            return;
        }
        
        void FreeRegister()
        {
            for(list<Symbol>::iterator SymIt = GlobalST.Table.begin(); SymIt!=GlobalST.Table.end();SymIt++)
            {
                // cout << SymIt->Name << SymIt->RegNum << "Name\n"  ;
                if(SymIt->RegNum!=-1 &&  SymIt->Name[0]!='$')
                {
                    if(!Reg[SymIt->RegNum-1].LastUse)
                    {
                        if(!SymIt->changeVal)
                        {
                            EmitTCG("ST",SymIt->Name,"R"+itos(SymIt->RegNum));
                        }
                    }
                    SymIt->UpdateReg();
                }
            }

            for(int i =0; i< NumReg;i++)
            {
                Reg[i].Score=0;
                Reg[i].LastUse=true;
                Reg[i].Symbols.clear();
            }
        }
};

void createTCG(vector<Quad> IC)
{
    EmitTCG("label","Block 1");
    string Op;
    string result;
    RegisterBank RegBank;
    string RegName1,RegName2,RegName3;
    int BC = -1;

    int index = 1;
    // cout << "Index: " << index-BC+1 << " Size: " << TCA.size()-BC << endl; 
    Coress[itos(index-BC)]=TCA.size()-BC;
    // cout << "Opppp" << QuadList.InstructionList[index].Op << endl;
    while(index<QuadList.InstructionList.size() && QuadList.InstructionList[index].Op!="label")
    {
        // cout << QuadList.InstructionList[index].Arg1 << "oi=31.1415 "<<index+1 << endl;
        LastLine[QuadList.InstructionList[index].Arg1]=index+1;
        LastLine[QuadList.InstructionList[index].Arg2]=index+1;
        index++;
    }

    // IC.insert(IC.begin(),Quad("label","Block 1"));
    Coress["1"] = 1;
    for (vector<Quad>::iterator it = IC.begin(); it != IC.end(); it++) 
    {
        Op = it->Op;
        // cout << Op << endl;
        result = it->Result;
        if (Op == "=")
        {
            if(isdigit(it->Arg1[0]))
            {
                Symbol* Target = GlobalST.LookUp(result);
                RegBank.AllocRegister(Target,RegName3,it-IC.begin(),1);
                EmitTCG("LDI",RegName3,it->Arg1);
            }
            else if(it->Arg1=="$")
            {
                Symbol* Target = GlobalST.LookUp(result);
                Symbol* Arg1 = GlobalST.LookUp(it->Arg1);
                if(Target->RegNum!=-1)
                {
                    for(vector<Symbol*>::iterator SymIt = RegBank.Reg[Target->RegNum-1].Symbols.begin(); SymIt<RegBank.Reg[Target->RegNum-1].Symbols.end();SymIt++)
                    {
                        if((*SymIt)->Name==Target->Name)
                        {
                            RegBank.Reg[Target->RegNum-1].Symbols.erase(SymIt);
                            break;
                        }
                    }
                }

                if(!Target)
                Target->UpdateReg(Arg1->RegNum);
                Target->changeVal = true;
                RegBank.Reg[Arg1->RegNum-1].Symbols.push_back(Target);
                RegBank.Reg[Arg1->RegNum-1].Score+=1;
            }
            else
            {
                Symbol* Arg1 = GlobalST.LookUp(it->Arg1);
                Symbol* Target = GlobalST.LookUp(result);
                RegBank.AllocRegister(Arg1,NULL,RegName1,RegName2,it-IC.begin());

                if(Target->RegNum!=stoi(std::string(1, RegName1[1])))
                {
                    if(Target->RegNum!=-1)
                    {
                        for(vector<Symbol*>::iterator SymIt = RegBank.Reg[Target->RegNum-1].Symbols.begin(); SymIt<RegBank.Reg[Target->RegNum-1].Symbols.end();SymIt++)
                        {
                            if((*SymIt)->Name==Target->Name)
                            {
                                RegBank.Reg[Target->RegNum-1].Symbols.erase(SymIt);
                                break;
                            }
                        }
                    }
                }

                if(Target!=NULL)
                Target->UpdateReg(stoi(std::string(1, RegName1[1])));
                RegBank.Reg[stoi(std::string(1, RegName1[1]))-1].Symbols.push_back(Target);
                // cout <<Target->Name << " Prabhash " << Assigned[0] << nl;
                RegBank.Reg[stoi(std::string(1, RegName1[1]))-1].LastUse=0;
                // cout << RegBank.Reg[Assigned[0]-1].LastUse << endl;
                RegBank.Reg[stoi(std::string(1, RegName1[1]))-1].Score+=1;
            }
        }
        else if (Op == "goto")
        {
            RegBank.FreeRegister();
            EmitTCG("JMP",it->Result);
        }
        else if (Op == "label")
        {
            BC++;
            RegBank.FreeRegister();
            LastLine.clear();
            // cout << "dfkjgiofnvbjmhgkpb" << endl;
            int index = it - IC.begin()+1;
            // cout << "Index: " << index-BC+1 << " Size: " << TCA.size()-BC << endl; 
            Coress[itos(index-BC)]=TCA.size()-BC;
            // cout << "Opppp" << QuadList.InstructionList[index].Op << endl;
            while(index<QuadList.InstructionList.size() && QuadList.InstructionList[index].Op!="label")
            {
                // cout << QuadList.InstructionList[index].Arg1 << "oi=31.1415 " << endl;
                LastLine[QuadList.InstructionList[index].Arg1]=index+1;
                LastLine[QuadList.InstructionList[index].Arg2]=index+1;
                index++;
            }
            EmitTCG("label",it->Result);
        }
        else if (Op == "+" || Op == "-" || Op == "*" || Op == "/" || Op == "%" || Op == "^" || Op == "|" || Op == "&" || Op == "<<" || Op == ">>")
        {
            Symbol *Arg1,*Arg2,*Target;
            RegName1 = it->Arg1;
            RegName2 = it->Arg2;
            Arg1 = GlobalST.LookUp(RegName1);
            Arg2 = GlobalST.LookUp(RegName2);
            Target= GlobalST.LookUp(result);
            
            RegBank.AllocRegister(Arg1,Arg2,RegName1,RegName2,it-IC.begin());
            RegBank.AllocRegister(Target,RegName3,it-IC.begin());
            EmitTCG(Op,RegName3,RegName1,RegName2);
        }
        else if (Op == "==" || Op == "!=" || Op == "<" || Op == ">" || Op == "<=" || Op == ">=")
        {
            Symbol *Arg1,*Arg2;
            RegName1 = it->Arg1;
            RegName2 = it->Arg2;
            RegName3 = it->Result;
            Arg1 = GlobalST.LookUp(RegName1);
            Arg2 = GlobalST.LookUp(RegName2);

            RegBank.AllocRegister(Arg1,Arg2,RegName1,RegName2,it-IC.begin());
            EmitTCG(Op,RegName3,RegName1,RegName2);
        }   
        else
            cout << "Unknown Operator";  // Handle unknown operations  
        
    }
    RegBank.FreeRegister();
}

int main() 
{
    cout << "\nStarting Intermediate Code Generation..." << endl;
    yyparse(); // Parse the input
    cout << "Intermediate Code Generated Successfully.\n" << endl;

    cout << "Saving Intermediate Code to 'intcode.txt'..." << endl;
    FILE *file;

    // Open the file in write mode ("w")
    file = fopen("intcode.txt", "w");

    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Error: Unable to open 'intcode.txt' for writing.\n");
        return 1;
    }

    QuadList.Print(file);

    // Close the file to save changes
    fclose(file);
    cout << "Intermediate Code successfully saved to 'intcode.txt'.\n" << endl;

    // cout << "SYMBOL TABLE:" << nl;
    // for (list<Symbol>::iterator it = GlobalST.Table.begin(); it != GlobalST.Table.end(); it++) 
    // {
    //     cout << it->Name << " " << it->RegNum << nl; 
    // }

    cout << "Starting Target Code Generation..." << endl;
    createTCG(QuadList.InstructionList);
    cout << "Target Code Generated Successfully.\n" << endl;

    cout << "Saving Target Code to 'TCG.txt'..." << endl;
    file = fopen("TCG.txt", "w");
    printTCG(file);
    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Error: Unable to open 'TCG.txt' for writing.\n");
        return 1;
    }
    // Close the file to save changes
    fclose(file);
    cout << "Target Code successfully saved to 'TCG.txt'.\n" << endl;
    return 0;
}