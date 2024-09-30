%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();  // Function declaration for the lexer
void yyerror(char* s); // Function declaration for error handling

extern char* yytext;

// Define the structure for the parse tree node
typedef struct _Ptree {
    char* value;  
    struct _Ptree *left; // Pointer to the left subtree
    struct _Ptree *right;
    int val;
    union{
        char i;
        int n;
    } inh;
} Ptree;

Ptree* createPtree(char *value, Ptree *left, Ptree *right) {
        Ptree *node = (Ptree *)malloc(sizeof(Ptree));
        node->value = strdup(value);
        node->left = left;
        node->right = right;
        return node;
    }

void setatt(Ptree *node) {

    if (node == NULL) return;  // Base case: empty node

    if (!strcmp("P", node->value)) {
        if (node->left != NULL) {
            node->left->inh.i = node->inh.i;
        }
    }
    else if (!strcmp("S", node->value)) {
        if (node->right != NULL && node->left != NULL) {
        }
        else{
            node->left->inh.i = 43;
        }
    }

    // Evaluate left subtree
    setatt(node->left);

    // Inherited attributes processing
    if (!strcmp("N", node->value)) {
        if (node->right != NULL) {
            node->right->inh.n = node->left->val;
        }
    }
    else if (!strcmp("M", node->value)) {
        if (node->right != NULL) {
            node->right->inh.n = node->inh.n * 10 + node->left->val;
        }
    } 
    else if (!strcmp("ignore", node->value)) {
        if (node->right != NULL && node->left != NULL) {
            node->right->inh.i = node->left->inh.i;
        }
    }
    else if (!strcmp("S", node->value)) {
        if (node->right != NULL && node->left != NULL) {
            node->right->inh.i = node->left->inh.i;
        }
    }
    else if (!strcmp("-", node->value)) {
        node->inh.i = 45;  // ASCII value for '-'
    }
    else if (!strcmp("+", node->value)) {
        node->inh.i = 43;  // ASCII value for '+'
    }

    // Evaluate right subtree
    setatt(node->right);

    // Synthesized attributes processing
    if (!strcmp("M", node->value)) {
        if (node->right == NULL) {
            node->val = node->left->val + node->inh.n * 10;
        } else {
            node->val = node->right->val;
        }
    }
    else if (!strcmp("N", node->value)) {
        if (node->right == NULL) {
            node->val = node->left->val;
        } else {
            node->val = node->right->val;
        }
    }
    else if ('0' <= node->value[0] && '9' >= node->value[0]) {
        // Convert numeric string to integer value
        node->val = atoi(node->value);
    }
}


void printPTree(Ptree *node, int level) {
        if (node == NULL) return;
        if(strcmp(node->value,"ignore"))
        {
            for (int i = 0; i < level-1; i++) printf("  ");
            if(level>0) printf("  ==> ");
            printf("%s [", node->value);
            if(!strcmp("M",node->value))
            {
                printf("inh = %d, val = %d",node->inh.n,node->val);
            }
            else if (!strcmp("N",node->value))
            {
                printf("val = %d",node->val);
            }
            else if (!strcmp("T",node->value))
            {
                printf("inh = %c",node->inh.i);
            }
            else if (!strcmp("P",node->value))
            {
                printf("inh = %c",node->inh.i);
            }
            else if('0' <= node->value[0] && '9' >= node->value[0])
            {
                printf("val = %d",node->val);
            }
            printf("]\n");
            printPTree(node->left, level + 1);
            printPTree(node->right, level + 1);
        }
        else
        {
            printPTree(node->left, level);
            printPTree(node->right, level);
        }
    }

void printderivative (Ptree *node)
{
    if(node==NULL) return;
    if(!strcmp(node->value,"T"))
    {
        if(node->right!=NULL)
        {
            if(node->right->right!=NULL)
            {
                printf(" %c %d",node->inh.i,node->left->val*node->right->right->val);
                if(node->right->right->val>2) printf("x^%d",node->right->right->val-1);\
                else if(node->right->right->val==2) printf("x");
            }
            else
            {
                printf(" %c %d",node->inh.i,node->left->val);
            }
        }
        else if(!strcmp(node->left->value,"X"))
        {
            if(node->left->right!=NULL)
            {
                if(node->left->right->val>2) printf(" %c %dx^%d",node->inh.i,node->left->right->val,node->left->right->val-1);
                else if(node->left->right->val==2) printf(" %c 2x",node->inh.i);
                else if(node->left->right->val==1) printf(" %c 1",node->inh.i);
            }
            else
            {
                printf(" %c 1",node->inh.i);
            }
        }
    } 
    printderivative(node->left);
    printderivative(node->right);
}

long long power(long long a, long long b)
{
    long long t=1;
    while(b--)
    {
        t*=a;
    }
    return t;
}

long long evalpoly(Ptree* node, long long x) 
{
    if (!strcmp(node->value, "P")) 
    {
        if (node->right == NULL)
        {
            return evalpoly(node->left, x);
        } 
        else 
        {

            return evalpoly(node->left, x) + evalpoly(node->right->right, x);
        }
    } 
    else if (!strcmp(node->value, "T")) 
    {
        if (node->right != NULL) 
        {
            if (node->right->right != NULL) 
            {
                if(node->inh.i=='-')
                return -1 * node->left->val * power(x, node->right->right->val);
                
                return node->left->val * power(x, node->right->right->val);
            } 
            else 
            {
                if(node->inh.i=='-')
                return -1*node->left->val * x;


                return node->left->val * x;
            }
        } 
        else if (node->left != NULL && !strcmp(node->left->value, "X")) 
        {
            if (node->left->right != NULL) 
            {
                if(node->inh.i=='-')
                return -1 * power(x, node->left->right->val);


                return power(x, node->left->right->val);
            } 
            else 
            {
                if(node->inh.i=='-')
                return -1*x;
                

                return x;
            }
        } 
        else 
        {
            if(node->inh.i=='-')
            {
                return -1* node->left->val;
            }
            return node->left->val;
        }
    } 
    else if (!strcmp(node->value, "S"))
    {
        if (node->right == NULL) 
        {
            return evalpoly(node->left, x);
        } 
        else 
        {
            return evalpoly(node->right, x);
        }
    }

    // Add a return value for cases where none of the conditions are met
    return 0;
}


void DonePTree(Ptree* node)
{
    setatt(node);
    printf("+++ The annotated parse tree is\n  ");
    printPTree(node,0);
    printf("\n");
    for(int i=-5;i<6;i++)
    {
        printf("+++ f(%2d) = %19lld\n",i,evalpoly(node,i));
    }
    printf("\n+++ f'(x) =");
    printderivative(node);
    printf("\n");
    return;
}

%}

%union
{
    int num;
    char* val;
    Ptree *node;
}

%start S

%token <num> ZERO ONE  PLUS MINUS VAR POW

%token <val> NUM

%type <node> S P T X N M


%%

S :
    P  {$$ = createPtree("S",$1,NULL);DonePTree($$);}
    | PLUS P  {$$ = createPtree("S",createPtree("+",NULL,NULL),$2);DonePTree($$);}
    | MINUS P {$$ = createPtree("S",createPtree("-",NULL,NULL),$2);DonePTree($$);};

P : 
    T  {$$ = createPtree("P",$1,NULL);}
    | T PLUS P {$$ = createPtree("P",$1,createPtree("ignore",createPtree("+",NULL,NULL),$3));}
    | T MINUS P {$$ = createPtree("P",$1,createPtree("ignore",createPtree("-",NULL,NULL),$3));};

T :
    ONE {$$ = createPtree("T",createPtree("1",NULL,NULL),NULL);}
    | N   {$$ = createPtree("T",$1,NULL);}
    | X     {$$ = createPtree("T",$1,NULL);}
    | N X      {$$ = createPtree("T",$1,$2);};

X : 
    VAR  {$$ = createPtree("X",createPtree("x",NULL,NULL),NULL);}
    | VAR POW N {$$ = createPtree("X",createPtree("ignore",createPtree("x",NULL,NULL),createPtree("^",NULL,NULL)),$3);};

N :
    NUM {$$ = createPtree("N",createPtree($1,NULL,NULL),NULL);}
    | ONE M  {$$ = createPtree("N",createPtree("1",NULL,NULL),$2);}
    | NUM M  {$$ = createPtree("N",createPtree($1,NULL,NULL),$2);};

M :
    ZERO  {$$ = createPtree("M",createPtree("0",NULL,NULL),NULL);}
    | ONE {$$ = createPtree("M",createPtree("1",NULL,NULL),NULL);}
    | NUM {$$ = createPtree("M",createPtree($1,NULL,NULL),NULL);}
    | ZERO M {$$ = createPtree("M",createPtree("0",NULL,NULL),$2);}
    | ONE M {$$ = createPtree("M",createPtree("1",NULL,NULL),$2);}
    | NUM M {$$ = createPtree("M",createPtree($1,NULL,NULL),$2);}

%%

void yyerror(char* s) {
    printf("Error : %s \n",s); // Print a generic error message
}