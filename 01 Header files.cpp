#include <iostream>
using namespace std; 

int main()
{
    cout << "Statements with # are preprocessor directive statements. \nSome old-style header files with their new counterparts are as follows:\n<assert.h> : Contains macros and information for adding diagnostics that aid program debugging - <cassert>\n<ctype.h> : Contains function prototypes for functions that test characters for certain properties, and function prototypes for functions that can be used to convert lowercase letters to uppercase letters and vice versa - <cctype>\n<iostream.h> : Contains function prototypes for the standard input and standard output functions - <iostream>";
    cout << "Namespace is a concept new to ANSI C++. \nIt defines the scope for the indentifiers that are used in a program. \nFor using the identifiers defined in the namespace scope, we must include the using directive, like \nusing namespace std;\nHere, std is the namespace where ANSI C++ standard class libraries. \nIt brings all the identifiers defined in std to the current global scope.";
    return 0;
}