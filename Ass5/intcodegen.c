#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.c"
#include "lex.yy.c"

nametable T = NULL; // Global variable for the symbol table

node* Setter(node* T,char* id,int* x)
{
    node * p = T;

    // Traverse the list to find if the variable already exists
    while (p) {
        if (!strcmp(p -> name, id)) {
            *x = p->nocc;
            return T; // Return the head of the list
        }
        p = p -> next;
    }

    node * new_node = (node * ) malloc(sizeof(node)); // Allocate memory for a new node
    new_node -> name = (char * ) malloc((strlen(id) + 1) * sizeof(char)); // Allocate memory for the name
    strcpy(new_node -> name, id); // Copy the name
    new_node -> nocc = MemVal++;
    *x = new_node->nocc;
    new_node -> next = T; // Insert at the beginning of the list (optional: you can also append)
    return new_node;
}

int main() {
	printf("#include <stdio.h>\n#include <stdlib.h>\n#include \"aux.c\"\n\nint main ()\n{\n    int R[12];\n    int MEM[65536];\n\n");
    yyparse(); // Parse the input
	printf("\n    exit(0);\n}");
    return 0;
}