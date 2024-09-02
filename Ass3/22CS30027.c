#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.c"
#include "lex.yy.c"

nametable T  = NULL;

void FreeTree(Ptree* T) {
    if (T == NULL) return;

    // Recursively free left and right subtrees
    if(T->Left!=NULL) FreeTree(T->Left);
    if(T->Right!=NULL) FreeTree(T->Right);

    // Free the operator string if it exists
    if (T->oper != NULL) {
        free(T->oper);
        T->oper = NULL; // Set to NULL to avoid dangling pointers
    }

    // Free the tree node itself
    free(T);
}


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
            else if(strcmp(Tree->oper, "**")==0) ans = power(left,right);
            FreeTree(Tree->Left); // For freeing the tree
            FreeTree(Tree->Right);
            Tree->Left=NULL;
            Tree->Right=NULL;
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
            return atoll(Tree->oper);
        }
        
        default:
            break;
    };
    return 0;
}

Ptree *S = NULL;

int power(int a , int b)
{
   int k = 1;
   while(b--)
   {
      k*=a;
   }
   return k;
}

node* setter(nametable T, char *id, int num) {
   node *p = T;
   
   // Traverse the list to find if the variable already exists
   while (p) {
      if (!strcmp(p->name, id)) {  // Variable found
         p->nocc = num;            // Update the value
         printf("Variable %s is set to %d\n", id, num);
         return T;                 // Return the head of the list
      }
      p = p->next;
   }
   
   // If not found, create a new node
   node *new_node = (node *)malloc(sizeof(node));  // Allocate memory for a new node
   new_node->name = (char *)malloc((strlen(id) + 1) * sizeof(char));  // Allocate memory for the name
   strcpy(new_node->name, id);  // Copy the name
   new_node->nocc = num;        // Set the value
   new_node->next = T;          // Insert at the beginning of the list (optional: you can also append)
   
   printf("Variable %s is set to %d\n", id, num);
   return new_node;  // Return the new node, which becomes the new head of the list
}

// typedef struct _Ptree{
//     char* oper;
//     int nodeT;
//     struct _Ptree *Left;
//     struct _Ptree *Right;
// } Ptree;

// typedef struct Node {
//     Ptree* data;          // Pointer to the Ptree node
//     struct Node* next;    // Pointer to the next node in the stack
// } Node;

// // Stack structure definition
// typedef struct {
//     Node* top;            // Pointer to the top of the stack
// } Stack;

// // Initialize the stack
// void initStack(Stack* s) {
//     s->top = NULL;  // Empty stack
// }

// // Check if the stack is empty
// int isEmpty(Stack* s) {
//     return s->top == NULL;
// }

// void FreeStack(Stack A)
// {
//    while(!isEmpty(&A))
//    {
//       Ptree* temp = pop(&A);
//       FreeTree(temp);
//    }
//    return;
// }

// Ptree* top(Stack* s) {
//     if (isEmpty(s)) {
//         printf("Stack is empty! Cannot access top element.\n");
//         return NULL;
//     }
//     return s->top->data;
// }

// // Push a Ptree* onto the stack
// void push(Stack* s, Ptree* node) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (newNode == NULL) {
//         printf("Memory allocation failed! Cannot push.\n");
//         return;
//     }
//     newNode->data = node;
//     newNode->next = s->top;
//     s->top = newNode;
// }

// Ptree* pop(Stack* s) {
//     if (isEmpty(s)) {
//         printf("Stack underflow! Cannot pop.\n");
//         return NULL;
//     }
//     Node* temp = s->top;
//     Ptree* poppedData = temp->data;
//     s->top = temp->next;
//     free(temp);
//     return poppedData;
// }

int getter (nametable T,char *id)
{
    node *p;
    p = T;
    while (p) {
        if (!strcmp(p->name,id)) {
            return p -> nocc;
        }
        p = p -> next;
    }
    printf("Error the Variable %s not declared yet\n",id);
}

void freeAll(nametable T)
{
   while (T != NULL) {
        node* temp = T;
        T = T->next;
        free(temp->name);
        free(temp);
    }
}

void free_yylval_id() {
    if (yylval.id) {
        free(yylval.id);
        yylval.id = NULL;
    }
}

int main()
{
   yyparse();
   freeAll(T);
   free_yylval_id();
   return 0;
}