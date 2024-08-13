#include <bits/stdc++.h>

// Include the generated lexer file
#include "lex.yy.c" 
using namespace std;

// Function prototypes for adding commands and environments to lists
void addcommandinlist(const string cmd);
void addenvironmentinlist(const string env);

// Define a structure to hold items (commands or environments)
typedef class {
    public:
        string name; // Name of the item
        int count;  // Count of occurrences
} Item;

// Declare arrays to store commands and environments
Item commands[1000];
int command_count = 0;

Item environments[1000];
int environment_count = 0;

// Function to add a command to the list
void addcommandinlist(string cmd) {
    // Check if the command already exists in the list
    for (int i = 0; i < command_count; i++) {
        if (commands[i].name == cmd) {
            commands[i].count++; // Increment the count if found
            return; // Exit the function
        }
    }
    // If the command is new, add it to the list
    commands[command_count].name = cmd;
    commands[command_count].count = 1;
    command_count++;
}

// Function to add an environment to the list
void addenvironmentinlist(string env) {
    // Check if the environment already exists in the list
    for (int i = 0; i < environment_count; i++) {
        if (environments[i].name == env) {
            environments[i].count++; // Increment the count if found
            return; // Exit the function
        }
    }
    // If the environment is new, add it to the list
    environments[environment_count].name = env;
    environments[environment_count].count = 1;
    environment_count++;
}

// Function to print the list of commands
void printCommand() {
    cout << "Commands used:\n";
    for (int i = 0; i < command_count; i++) {
        cout << "\t" << commands[i].name << " (" << commands[i].count << ")\n";
    }
}

// Function to print the list of environments
void printEnvironment() {
    cout << "Environments used:\n";
    for (int i = 0; i < environment_count; i++) {
        cout << "\t" << environments[i].name << " (" << environments[i].count << ")\n";
    }
}

// Main function
int main() {

    // Run the lexer to process the input
    yylex();

    // Print the lists of commands and environments
    printCommand();
    printEnvironment();

    // Print the counts of math equations
    cout << inlinemath << " math equations found\n";
    cout << displaymath << " displayed equations found\n";

    return 0;
}