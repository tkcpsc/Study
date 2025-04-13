/**
 * Structure:
 * 1) Header Comment block: info about the file
 * 2) Include Directives: include headers in this order; 
 *      1) Corresponding header files if applicable (#include "MyClass.h"),
 *      2) Standard library headers (#include <iostream>),
 *      3) Third-party libraries (#include <ThirdPartyLib.h>),
 *      4) Project-specific headers (#include "OtherProjectFile.h")
 * 3) Namespace usage: only using explicit namespace declaration or using-declarations Ex(using std::cout) when needed.
 *    Avoid broad "using namespace std;" at global scope in professional code to prevent conflicts.
 * 4) Constants and Macros: define early to clearly seperate from implementation logic.
 * 5) Static/Internal Functions: Forward declaration of helper functions (optional).
 * 6) Implementation of Class Member Functions: implement class methods in the order they are declared in the header file.
 * 7) Helper/Internal Function Definitions (after member functions): define internal or helper functions below member functions
 * 8) Main Function (for Executables): if the .cpp is part of an executable (rather than a library or class implementation),
 *    provide your main() clearly at the bottom
 */



/**
 * Best Practices:
 *  1) Use header files (.h .hpp) to declare interfaces.
 *  2) Keep implementation files (.cpp) strictly for definitions.
 *  3) Clear and concise comments, explaining the intent, not obvious code
 */


// Preprocessing Directives
#include <iostream>
#include <string>

// Compilation Directives
using std::cout; // Using Declaration
using std::endl; // Using Declaration
using std::string; // Using Declaration

void primitive_types() {

    // Declaring standard c++ primitive types.
    int x;
    double y;
    float z;
    long i;
    short j;
    char k;
    string l;
    bool m;

    // Initializing 
    x = 7;
    y = 1.0;
    z = 1000.0;
    i = 82109398123091;
    j = 123;
    k = 'c';
    l = "Hello";
    m = false;

    // Arithmic Operators.
    x = 10 + 3;
    y = 1.0 - 0.5;
    y = 1.0 * 0.5;
    y = 1.0 / 0.5;
    y = 10 % 2;


    // Logical Operators
    j = ((x == y) && (x = 1)); // Logical AND
    j = ((x == y) || (x = 1)); // Logical OR

    // Bitwise Operators
    unsigned int a = 5; // 0101 in binary
    unsigned int b = 3; // 0011 in binary

        // Bitwize AND
        cout << "a & b = " << (a & b) << endl; // 0101 & 0011 = 0001 (1)
       
        // Bitwize OR
        cout << "a | b = " << (a | b) << endl; // 0101 | 0011 = 0111 (7)
        
        // Bitwize XOR (1 or the other but not both)
        cout << "a ^ b = " << (a ^ b) << endl; // 0101 ^ 0011 = 0110 (6)

        // Bitwize NOT
        cout <<   "~a = "  <<   (~a)  << endl; // ~0101 = 1010 (in 32-bit, it's -6)
            // Output may seem strange because ~a inverts all bits, including sign bits. 
            // For unsigned int a = 5, ~a = 4294967290 on a 32-bit system.

        // Bitwize Left Shift
        cout << "a << 1 = " << (a << 1) << endl; // 0101 << 1 = 1010 (10)

        // Bitwize Right Shift
        cout << "a >> 1 = " << (a >> 1) << endl; // 0101 >> 1 = 0010 (2)

}

void modifiers() {
    // Type Specifiers - These define the bae type or modify the range/representation of data types.
        // int, float, double, char, etc..
        signed int x = -10; // Explicitly makes a type signed (store positive and negative values) (default for int)
        unsigned int y = 10; // Only positive integers, doubles the upper range.
        // long, short: changes the size of integer types

    // Type Qualifiers - These provide additional information about how a variable should behave.
        const int z = 10; // Makes a read only variable.
        const unsigned int i = 10; // Can combine with Type Specifiers.
        volatile int j; // Tells compiler the variable can change unexpectedly.
        // mutable int k; // Allows a class member to be changed even in a const object

    // Storage Class Specifier - these define the lifetime, visibility, and linkage of varables/functions.
        static int k; // Preserves variable value across function calls, limits scope.
        extern int l; // Declares a variable/function defined elsewhere.
        // register int m; // Suggests storing variable in CPU register.
        thread_local int n; // C++11: Creates a variable local to a thread.
}


int main() {


    return 0;
}
