#include <stdio.h>
#include "y.tab.c" // YACC/Bison generated parser
#include "lex.yy.c" // Flex generated lexical analyzer


// Function to create a parse tree node
Ptree * createPtree(char * value, Ptree * left, Ptree * right)
{
	Ptree * node = (Ptree * ) malloc(sizeof(Ptree)); // Allocate memory for the node
	node->value = strdup(value); // Duplicate the string value for the node
	node->left = left; // Assign left child
	node->right = right; // Assign right child
	return node; // Return the created node
}

// Function to set inherited attributes in the parse tree
void setatt(Ptree * node)
{
	if(node == NULL) return; // Base case: empty node
	// Inherited attribute logic for specific node types
	if(!strcmp("P", node->value))
	{
		if(node->left != NULL)
		{
			node->left->inh.i = node->inh.i; // Set inherited attribute for left child
		}
	}
	else if(!strcmp("S", node->value))
	{
		if(node->right != NULL && node->left != NULL)
		{
			// Do nothing if both children exist
		}
		else
		{
			node->left->inh.i = 43; // Set inherited attribute for left child
		}
	}
	// Evaluate left subtree
	setatt(node->left);
	// Inherited attributes processing for specific node types
	if(!strcmp("N", node->value))
	{
		if(node->right != NULL)
		{
			node->right->inh.n = node->left->val; // Propagate value to right child
		}
	}
	else if(!strcmp("M", node->value))
	{
		if(node->right != NULL)
		{
			node->right->inh.n = node->inh.n * 10 + node->left->val; // Compute new value
		}
	}
	else if(!strcmp("ignore", node->value))
	{
		if(node->right != NULL && node->left != NULL)
		{
			node->right->inh.i = node->left->inh.i; // Copy inherited attribute
		}
	}
	else if(!strcmp("S", node->value))
	{
		if(node->right != NULL && node->left != NULL)
		{
			node->right->inh.i = node->left->inh.i; // Propagate to right child
		}
	}
	else if(!strcmp("-", node->value))
	{
		node->inh.i = 45; // Set ASCII value for minus sign
	}
	else if(!strcmp("+", node->value))
	{
		node->inh.i = 43; // Set ASCII value for plus sign
	}
	// Evaluate right subtree
	setatt(node->right);
	// Synthesized attributes processing for specific node types
	if(!strcmp("M", node->value))
	{
		if(node->right == NULL)
		{
			node->val = node->left->val + node->inh.n * 10; // Compute value
		}
		else
		{
			node->val = node->right->val; // Assign right child value
		}
	}
	else if(!strcmp("N", node->value))
	{
		if(node->right == NULL)
		{
			node->val = node->left->val; // Assign left child value
		}
		else
		{
			node->val = node->right->val; // Assign right child value
		}
	}
	else if('0' <= node->value[0] && '9' >= node->value[0])
	{
		// Convert numeric string to integer value
		node->val = atoi(node->value);
	}
}

// Function to print the parse tree
void printPTree(Ptree * node, int level)
{
	if(node == NULL) return; // Base case: empty node
	if(strcmp(node->value, "ignore")) // Skip nodes marked as "ignore"
	{
		for(int i = 0; i < level - 1; i++) printf("  "); // Indent for levels
		if(level > 0) printf("  ==> "); // Print arrow for levels > 0
		// Print node value and attributes
		printf("%s [", node->value);
		if(!strcmp("M", node->value))
		{
			printf("inh = %d, val = %d", node->inh.n, node->val);
		}
		else if(!strcmp("N", node->value))
		{
			printf("val = %d", node->val);
		}
		else if(!strcmp("T", node->value))
		{
			printf("inh = %c", node->inh.i);
		}
		else if(!strcmp("P", node->value))
		{
			printf("inh = %c", node->inh.i);
		}
		else if('0' <= node->value[0] && '9' >= node->value[0])
		{
			printf("val = %d", node->val);
		}
		printf("]\n"); // Close attribute printing
		printPTree(node->left, level + 1); // Print left subtree
		printPTree(node->right, level + 1); // Print right subtree
	}
	else
	{
		printPTree(node->left, level); // Ignore nodes with value "ignore"
		printPTree(node->right, level);
	}
}

// Function to print the derivative of a polynomial represented by the parse tree
void printderivative(Ptree * node)
{
	if(a==0) 
	{
		printf(" 0 "); //if the function is constant
		return;
	}
	if(node == NULL) return; // Base case: empty node
	if(!strcmp(node->value, "T"))
	{ // If the node represents a term
		if(node->right != NULL)
		{
			if(node->right->right != NULL)
			{ // Power term present
				printf(" %c %d", node->inh.i, node->left->val * node->right->right->val); // Derivative term
				if(node->right->right->val > 2) printf("x^%d", node->right->right->val - 1);
				else if(node->right->right->val == 2) printf("x");
			}
			else
			{ // Linear term
				printf(" %c %d", node->inh.i, node->left->val);
			}
		}
		else if(!strcmp(node->left->value, "X"))
		{ // Variable term
			if(node->left->right != NULL)
			{
				if(node->left->right->val > 2) printf(" %c %dx^%d", node->inh.i, node->left->right->val, node->left->right->val - 1);
				else if(node->left->right->val == 2) printf(" %c 2x", node->inh.i);
				else if(node->left->right->val == 1) printf(" %c 1", node->inh.i);
			}
			else
			{
				printf(" %c 1", node->inh.i);
			}
		}
	}
	// Recursively print derivatives of subtrees
	printderivative(node->left);
	printderivative(node->right);
}

// Function to calculate power
long long power(long long a, long long b)
{
	long long t = 1;
	while(b--)
	{
		t *= a;
	}
	return t;
}

// Function to evaluate a polynomial for a given value of x
long long evalpoly(Ptree * node, long long x)
{
	if(node==NULL) return 0;
	if(!strcmp(node->value, "P"))
	{ // If the node is a polynomial
		if(node->right == NULL)
		{
			return evalpoly(node->left, x);
		}
		else
		{
			return evalpoly(node->left, x) + evalpoly(node->right->right, x);
		}
	}
	else if(!strcmp(node->value, "T"))
	{ // If the node is a term
		if(node->right != NULL)
		{
			if(node->right->right != NULL)
			{ // If there's an exponent
				if(node->inh.i == '-') return -1 * node->left->val * power(x, node->right->right->val); // Negative term
				return node->left->val * power(x, node->right->right->val); // Positive term
			}
			else
			{ // Linear term
				if(node->inh.i == '-') return -1 * node->left->val * x;
				return node->left->val * x;
			}
		}
		else if(node->left != NULL && !strcmp(node->left->value, "X"))
		{ // Variable term
			if(node->left->right != NULL)
			{
				if(node->inh.i == '-') return -1 * power(x, node->left->right->val);
				return power(x, node->left->right->val);
			}
			else
			{
				if(node->inh.i == '-') return -1 * x;
				return x;
			}
		}
		else
		{ // Constant term
			if(node->inh.i == '-') return -1 * node->left->val;
			return node->left->val;
		}
	}
	else if(!strcmp(node->value, "S"))
	{ // If the node is an expression
		if(node->right == NULL)
		{
			return evalpoly(node->left, x);
		}
		else
		{
			return evalpoly(node->right, x);
		}
	}
	// Default return value
	return 0;
}

// Main function
int main()
{
	yyparse(); // Call parser to construct parse tree
	setatt(root); // Set attributes for the parse tree
	printf("+++ The annotated parse tree is\n  ");
	printPTree(root, 0); // Print the annotated parse tree
	printf("\n");
	// Evaluate and print the polynomial for values from -5 to 5
	for(int i = -5; i < 6; i++)
	{
		printf("+++ f(%2d) = %19lld\n", i, evalpoly(root, i));
	}
	// Print the derivative of the polynomial
	printf("\n+++ f'(x) =");
	printderivative(root);
	printf("\n");
	return 0;
}