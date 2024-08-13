%{
#include <stdio.h>
#include <string>
using namespace std;

// Function prototypes for external functions
extern void addcommandinlist(string cmd); // Adds a command to the list
extern void addenvironmentinlist(string env); // Adds an environment to the list

// Variables to store recognized commands and environments
string command;
string environment;

// Flags to track parser state
long long mathmode = 0;    // Flag indicating whether we're in math mode 
long long comment = 0;      // Flag indicating whether we're in a comment

// Counters for different types of math equations
long long inlinemath = 0;    // Counter for inline math equations
long long displaymath = 0;   // Counter for displayed math equations

%}

%%

"\\begin{"[a-zA-Z]+[a-zA-Z0-9_]*"}"  {
    // Rule for recognizing environment start tags
    if (!comment && !mathmode) {  // Only process if not in a comment or math mode
        environment = string(yytext+7);  // Extract environment name (skip "\\begin{")
        environment = environment.substr(0, environment.size() - 1); // Remove closing "}"
        addenvironmentinlist(environment); // Add environment to the list
    }}

"\\end{"[a-zA-Z]+[a-zA-Z0-9_]*"}" {
    // Rule for recognizing environment end tags
    if (!comment && !mathmode) { // Only process if not in a comment or math mode
        environment = string(yytext+5); // Extract environment name (skip "\\end{")
        environment = environment.substr(0, environment.size() - 1); // Remove closing "}"
    }
}

"$" {
    // Rule for recognizing inline math mode start/end
    if (!comment) { // Only process if not in a comment
        if (mathmode) {  // If already in math mode, exit math mode
            mathmode = 0;
            inlinemath++; // Increment inline math count
        } else {           // If not in math mode, enter math mode
            mathmode = 1;
        }
    }
}

"$$" {
    // Rule for recognizing display math mode start/end
    if (!comment) { // Only process if not in a comment
        if (mathmode) {  // If already in math mode, exit math mode
            mathmode = 0;
            displaymath++; // Increment display math count
        } else {            // If not in math mode, enter math mode
            mathmode = 1;
        }
    }
}

"\\[" {
    // Rule for recognizing display math mode start
    if (!comment && !mathmode) { // Only process if not in a comment or math mode
        mathmode = 1;  // Enter math mode
    }
}

"\\]" {
    // Rule for recognizing display math mode end
    if (!comment && mathmode) { // Only process if not in a comment and in math mode
        mathmode = 0; 
        displaymath++;  // Increment display math count
    }
}

"\\\\" {
    // Rule for recognizing escaped backslashes
    if (!comment && !mathmode) { // Only process if not in a comment or math mode
        addcommandinlist("\\\\"); // Add escaped backslash to the list
    }
}

"\\"[a-zA-Z]+ {
    // Rule for recognizing commands starting with backslashes
    if (!comment) { // Only process if not in a comment
        command = string(yytext); // Store the command
        addcommandinlist(command); // Add command to the list
    }
}

"\\"[^a-zA-Z\s] {
    // Rule for recognizing commands with special characters after a backslash
    if (!comment) { // Only process if not in a comment
        command = string(yytext); // Store the command
        addcommandinlist(command); // Add command to the list
    }
}

"~" {
    // Rule for recognizing tilde character (~)
    if (!comment && !mathmode) { // Only process if not in a comment or math mode
        addcommandinlist("~"); // Add tilde to the list
    }
}

"%"[^\n]* {
    // Rule for recognizing comments
    comment = 1;
}

\n {
    comment = 0;  // End of comment line
}

.|\n {
    // Rule for ignoring other text
}

%%

// Function to handle end of input
int yywrap() {
    return 1;
}