#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "22CS30027.h"
#include "y.tab.h"

nametable T  = NULL;

Stack A;

void FreeTree(Ptree* T)
{
   if (T==NULL) return;
   if(T->Left!=NULL)
   {
      FreeTree(T->Left);
   }
   if(T->Right!=NULL)
   {
      FreeTree(T->Right);
   }
   free(T->oper);
   free(T);
   return;
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

nametable setter ( nametable T, char *id,int num )
{
   node *p;
   p = T;
   while (p) {
      if (!strcmp(p->name,id)) {
         p -> nocc = num;
         printf("Variable %s is set to %d\n",id,num);
         return T;
      }
      p = p -> next;
   }
   p = (node *)malloc(sizeof(node));
   p -> name = (char *)malloc((strlen(id)+1) * sizeof(char));
   strcpy(p -> name, id);
   p -> nocc = num;
   p -> next = T;
   printf("Variable %s is set to %d\n",id,num);
   return p;
}

// Initialize the stack
void initStack(Stack* s) {
    s->top = NULL;  // Empty stack
}

// Check if the stack is empty
int isEmpty(Stack* s) {
    return s->top == NULL;
}

void FreeStack(Stack A)
{
   while(!isEmpty(&A))
   {
      Ptree* temp = pop(&A);
      FreeTree(temp);
   }
   return;
}

Ptree* top(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Cannot access top element.\n");
        return NULL;
    }
    return s->top->data;
}

// Push a Ptree* onto the stack
void push(Stack* s, Ptree* node) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed! Cannot push.\n");
        return;
    }
    newNode->data = node;
    newNode->next = s->top;
    s->top = newNode;
}

// Pop a Ptree* from the stack
Ptree* pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow! Cannot pop.\n");
        return NULL;
    }
    Node* temp = s->top;
    Ptree* poppedData = temp->data;
    s->top = temp->next;
    free(temp);
    return poppedData;
}

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

int main()
{
   initStack(&A);
   yyparse();
   freeAll(T);
   FreeStack(A);
   return 0;
}