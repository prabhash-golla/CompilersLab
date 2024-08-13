#include <bits/stdc++.h>
#include "lex.yy.c"
using namespace std;
#define nl endl

typedef struct _node {
    char* name;
    int nocc;
    struct _node *next;
} node;
typedef node *nametable;



nametable addV(nametable T, char* id) {
    node *p = T;

    // Check if the variable already exists in the table
    while (p) {
        if (!strcmp(p->name, id)) {
            return T; 
        }
        p = p->next;
    }

    node* newNode = (node *)malloc(sizeof(node));
    newNode->name = (char *)malloc((strlen(id) + 1) * sizeof(char));
    strcpy(newNode->name, id);
    newNode->nocc = -1;
    newNode->next = nullptr;

    if (T == nullptr) {
        return newNode;
    }
    node* current = T;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;

    return T; 
}


typedef struct _Ptree{
    char* oper;
    int nodeT;
    struct _Ptree *Left;
    struct _Ptree *Right;
} Ptree;

typedef  struct _var{
    int n;
    struct _var *next;
} var;

var* addVar(var* T, int i) {
    var* p = new var;
    p->n = i;
    p->next = nullptr;
    
    if (T == nullptr) {
        return p;
    }

    var* current = T;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = p;
    return T;
}

string pri(int t,string s) {
    while (t > 1) {
        s+= "\t";
        t--;
    }
    if (t == 1) {
        s+= "--->";
    }
    return s;
}

#define NUM_NONTERMINALS 3
#define NUM_TERMINALS 9

typedef enum { E,O,A } NonTerminal;


typedef enum {
    LEFT_PAREN,      // Represents '('
    RIGHT_PAREN,     // Represents ')'
    PLUS,            // Represents '+'
    MINUS,           // Represents '-'
    MULTIPLY,        // Represents '*'
    DIVIDE,          // Represents '/'
    MODULO,          // Represents '%'
    ID,              // Represents an identifier
    NUM             // Represents a number
} Terminal;

Terminal stringToTerminal(const char* str) {
    if (strcmp(str, "(") == 0) return LEFT_PAREN;
    if (strcmp(str, ")") == 0) return RIGHT_PAREN;
    if (strcmp(str, "+") == 0) return PLUS;
    if (strcmp(str, "-") == 0) return MINUS;
    if (strcmp(str, "*") == 0) return MULTIPLY;
    if (strcmp(str, "/") == 0) return DIVIDE;
    if (strcmp(str, "%") == 0) return MODULO;
    if (strcmp(str, "i") == 0) return ID;
    if (strcmp(str, "j") == 0) return NUM;
    return static_cast<Terminal>(-1); 
}

NonTerminal convertStringToNonTerminal(const std::string& str) {
    if (str == "E") return E;
    if (str == "O") return O;
    if (str == "A") return A;
    if (str == "i") return A;
    if (str == "j") return A;
    return static_cast<NonTerminal>(-1);
}

typedef struct {
    NonTerminal nonterminal;
    Terminal terminal;
    const char* production;
} ParsingTableEntry;

ParsingTableEntry parsing_table[NUM_NONTERMINALS][NUM_TERMINALS] = {
    { {E, LEFT_PAREN, "( O A A )"}, {E, RIGHT_PAREN, NULL}, {E, PLUS, NULL}, {E, MINUS, NULL}, {E, MULTIPLY, NULL}, {E, DIVIDE, NULL}, {E, MODULO, NULL}, {E, ID, NULL}, {E, NUM, NULL}},
    { {O, LEFT_PAREN, NULL}, {O, RIGHT_PAREN, NULL}, {O, PLUS, "+"}, {O, MINUS, "-"}, {O, MULTIPLY, "*"}, {O, DIVIDE, "/"}, {O, MODULO, "%"}, {O, ID, NULL}, {O, NUM, NULL} },
    { {A, LEFT_PAREN, "E"}, {A, RIGHT_PAREN, NULL}, {A, PLUS, NULL}, {A, MINUS, NULL}, {A, MULTIPLY, NULL}, {A, DIVIDE, NULL}, {A, MODULO, NULL}, {A, ID, "i"}, {A, NUM, "j"}}
};


long long Caliculate(Ptree* Tree,nametable VT)
{
    switch (Tree->nodeT)
    {
        case 1:
        {
            long long left = Caliculate(Tree->Left,VT);
            long long right = Caliculate(Tree->Right,VT);
            long long ans;
            if(strcmp(Tree->oper, "*") == 0) ans = (left)*(right);
            else if(strcmp(Tree->oper, "+")==0) ans = (left)+(right);
            else if(strcmp(Tree->oper, "-")==0) ans = left-right;
            else if(strcmp(Tree->oper, "/")==0) ans = left/right;
            else if(strcmp(Tree->oper, "%")==0) ans = left%right;
            return ans;
            break;
        }

        case 2:
        {
            node *p = VT;
            while (p) {
                if (!strcmp(p->name, Tree->oper)) {
                    return p->nocc;
                }
                p=p->next;
            }
            break;
        }
        
        case 3:
        {
            try {
                // Convert the oper string to a long long integer
                return stoll(Tree->oper);
            } catch (const std::invalid_argument& e) {
                std:: cerr << "Error: Invalid number format: " << Tree->oper << nl;
                return 0;  // Return a default value or handle error as needed
            } catch (const std::out_of_range& e) {
                std:: cerr << "Error: Number out of range: " << Tree->oper << nl;
                return 0;  // Return a default value or handle error as needed
            }
            break;
        }
        
        default:
            break;
    };
    return 0;
}

void PrintTree(Ptree* Tree,int i)
{
    if(Tree==NULL)
    {
        return;
    }
    int j=i;
    while(j>1)
    {
        cout << "\t";
        j--;
    }
    if(j==1)
    {
        cout << "--->";
    }
    switch (Tree->nodeT)
    {
        case 1:
        {
            cout << "OP(" << Tree->oper << ")\n";
            PrintTree(Tree->Left,i+1);
            PrintTree(Tree->Right,i+1);
            break;
        }

        case 2:
        {
            cout << "ID(" << Tree->oper << ")\n";
            break;
        }
        
        case 3:
        {
            cout << "NUM(" << Tree->oper << ")\n";
            break;
        }
        
        default:
            break;
    };
    return;
}

int main() {
    int nexttok;
    stack<string> S;
    stack<Ptree*> A;
    S.push("$");
    S.push("E");
    string pra = "";
    nametable VT = NULL;
    var* VV= NULL;
    int t=0;

    while ((nexttok = yylex())) {
        switch (nexttok) {
            case OB:
            {
                pra += '('; 
                break;
            }
            case CB:
            {
                t--;
                if (A.size() < 3) {
                    break;
                }
                Ptree* R = A.top(); A.pop();
                Ptree* L = A.top(); A.pop();
                Ptree* N = A.top(); A.pop();
                Ptree* K = (Ptree*) malloc (1*sizeof(Ptree));
                K->nodeT=N->nodeT;
                K->Left = L;
                K->Right = R;
                K->oper = N->oper;  
                free(N);
                A.push(K);
                pra += ')';
                break;
            }
            case OP:
            {
                Ptree* K = (Ptree*) malloc (1*sizeof(Ptree));
                K->oper = (char*)malloc((strlen(yytext) + 1) * sizeof(char));
                strcpy(K->oper, yytext);
                K->nodeT = 1;
                K->Left=NULL;
                K->Right=NULL;
                A.push(K);
                pra += yytext;
                t++;
                break;
            }
            case NM:
            {
                Ptree* K = (Ptree*) malloc (1*sizeof(Ptree));
                K->oper = (char*)malloc((strlen(yytext) + 1) * sizeof(char));
                strcpy(K->oper, yytext);
                K->nodeT = 3;
                K->Left=NULL;
                K->Right=NULL;
                A.push(K);
                pra += 'i';
                break;
            }
            case VR:
            {   
                Ptree* K = (Ptree*) malloc (1*sizeof(Ptree));
                K->oper = (char*)malloc((strlen(yytext) + 1) * sizeof(char));
                strcpy(K->oper, yytext);
                K->nodeT = 2;
                K->Left=NULL;
                K->Right=NULL;
                A.push(K);
                VT = addV(VT, yytext);
                pra+= 'j';
                break;
            }
            case NM1:
            {
                int k = stoi(yytext);
                VV = addVar(VV,stoi(yytext));
                break;
            }
            default:
                cout << "Invalid Operator " << yytext << " found" << nl;
                return 1;
        }
    }
    pra+="$";
    int i = 0;
    while (!S.empty()) {
        string Top = S.top();
        S.pop();
        if (!isupper(Top[0]))
        {
            if(Top == string(1, pra[i]))
            {
                i++;
            }
            else {
                if (Top == "(") {
                    cerr << "*** Error: Left Parenthesis expected in place of ";
                    if (pra[i] == 'i') cout << "NUM\n";
                    else if (pra[i] == 'j') cout << "ID(i.e a Variable)\n";
                    else cout << pra[i] << nl;
                }
                if (Top == ")") {
                    cerr << "*** Error: Right Parenthesis expected in place of ";
                    if (pra[i] == 'i') cout << "NUM\n";
                    else if (pra[i] == 'j') cout << "ID(i.e a Variable)\n";
                    else cout << pra[i] << nl;
                }
                if (Top == "A") {
                    cerr << "*** Error: ID/NUM/LP expected in place of ";
                    if (pra[i] == 'i') cout << "NUM\n";
                    else if (pra[i] == 'j') cout << "ID(i.e a Variable)\n";
                    else cout << pra[i] << nl;
                }
                if (Top == "O") {
                    cerr << "*** Error: Operator expected in place of ";
                    if (pra[i] == 'i') cout << "NUM\n";
                    else if (pra[i] == 'j') cout << "ID(i.e a Variable)\n";
                    else cout << pra[i] << nl;
                }
                return 1;
            }
        } 
        else 
        {
            NonTerminal nt = convertStringToNonTerminal(Top);
            Terminal np = stringToTerminal(string(1, pra[i]).c_str());
            const char*  prod = parsing_table[nt][np].production;
            if (prod!=NULL) {
                for (int j = strlen(prod) - 1; j >= 0; j--) {
                    if (prod[j] != ' ') {
                        S.push(string(1, prod[j]));
                    }
                }
            } else {
                if (Top == "(") {
                    cerr << "*** Error: Left Parenthesis expected in place of ";
                    if (pra[i] == 'i') cout << "NUM\n";
                    else if (pra[i] == 'j') cout << "ID(i.e a Variable)\n";
                    else cout << pra[i] << nl;
                }
                if (Top == ")") {
                    cerr << "*** Error: Right Parenthesis expected in place of ";
                    if (pra[i] == 'i') cout << "NUM\n";
                    else if (pra[i] == 'j') cout << "ID(i.e a Variable)\n";
                    else cout << pra[i] << nl;
                }
                if (Top == "A") {
                    cerr << "*** Error: ID/NUM/LP expected in place of ";
                    if (pra[i] == 'i') cout << "NUM\n";
                    else if (pra[i] == 'j') cout << "ID(i.e a Variable)\n";
                    else cout << pra[i] << nl;
                }
                if (Top == "O") {
                    cerr << "*** Error: Operator expected in place of ";
                    if (pra[i] == 'i') cout << "NUM\n";
                    else if (pra[i] == 'j') cout << "ID(i.e a Variable)\n";
                    else cout << pra[i] << nl;
                }
                return 1;
            }
        }
    }

    if (i != pra.length()) {
        cerr << "Error: Extra input or missing expected tokens" << nl;
        return 1;
    }

    cout << "Parsing is successful" << nl ;
    PrintTree(A.top(),0);
    nametable VT1=VT;
    var* VV1=VV;
    if(VT!=NULL)
    cout << "Reading Variables from the input:" << nl;
    while(VT!=NULL && VV!=NULL)
    {
        if(VT==NULL) break;
        cout << VT->name << " : " << VV->n <<nl;
        VT->nocc = VV->n;
        VT=VT->next;
        VV=VV->next;
    }
    cout << "The expression evaluates to " <<Caliculate(A.top(),VT1) <<  nl;
    return 0;
}
