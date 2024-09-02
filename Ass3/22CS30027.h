#ifndef _22CS30027_H
#define _22CS30027_H
typedef struct _node {
   char *name;
   int nocc;
   struct _node *next;
} node;

typedef node *nametable;


typedef struct _Ptree{
    char* oper;
    int nodeT;
    struct _Ptree *Left;
    struct _Ptree *Right;
} Ptree;

typedef struct Node {
    Ptree* data;          // Pointer to the Ptree node
    struct Node* next;    // Pointer to the next node in the stack
} Node;

// Stack structure definition
typedef struct {
    Node* top;            // Pointer to the top of the stack
} Stack;

// Initialize the stack
void initStack(Stack* s) ;

// Check if the stack is empty
int isEmpty(Stack* s) ;

Ptree* top(Stack* s) ;

// Push a Ptree* onto the stack
void push(Stack* s, Ptree* node);

// Pop a Ptree* from the stack
Ptree* pop(Stack* s);

long long Caliculate(Ptree* Tree,nametable VT);

nametable setter ( nametable T, char *id,int num );

int getter (nametable T,char *id);

void FreeTree(Ptree* T);

int power (int a,int b);

#endif