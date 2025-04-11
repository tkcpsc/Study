/**
 * Directive: generally refers to specirfal instructions to the compiler or preprocessor, 
 *            guiding the compilation process or program behavior in specific ways. 
 *            They aren't executed at runtime; isntead, 
 *            they affect compilation or how the program is interpreted by the compiler.
 */



/**
 * Preprocessor Directives:
 *   -  Instruction processed by the preprocessor before actual compilation, 
 *          used for tasks like including files, 
 *          defining macros, or 
 *          controlling conditional compilation.
 *   -  Starts with the hash symbol #
 */

    // 1) Include Directives
    //    - #include instructs the preprocessor to copy the contents of the specified header file int your code before compilation

        // Sysytem Header File Library
        #include <iostream>
        #include <fstream>
        #include <cmath>
        #include <string>
        #include <cstring>
        #include <ctime>
        #include <vector>
        #include <algorithm>

        // User-defined Header File Library
        #include "header_files.h"

    // 2) Macro Definition Directives
    //    - Used to define symbolic constants or macros.

        #define PI 3.14159
        #define SQUARE(x) ((x)*(x))
        
    // 3) Conditional Compilation
    //    - Allows selective compilation of code segments based on certain 
    //      conditions, usually for debugging, platform-specific code, 
    //      or preventing multiple inclusions of the same file.

        // Debugging Example:
        #define DEBUG

        int main_func() {
            #ifdef DEBUG
                std::cout << "Debug mode enabled." << std::endl;
            #else
                std::cout << "Debug mode disabled." << std::endl;
            #endif

            // Include Header Guards:
            #ifndef UTILITY_H
            #define UTILITY_H
                // Declaration here
            #endif

            return 0;
        }
        
    // 4) Error Directives
    //    - Causes the preprocesor to immeduately stop and output a compile-time error message.
    //      Typically used to enfore certain build constraints or required definitions.

        #ifndef VERSION
            #error "VERSION must be defined before compilation!"
        #endif
        
        
    // 5) Line Directives
    //    - Overrides the compiler's internal understanding of the current file's line number and filename.
    //      Mostly used in automatically generated code or debugging scenarios to produce accurate error messages.
        
        #line 100 "auto_generated_code.cpp"
        // After this, the compiler will treat the next line as line 100 from the given file name.

    // 6) Pragma Directives
    //    - Directly provides compiler-specific instructions for specialized behavior.
    //      Commonly uses include managing warnings, optimizing, packing structures, and ensuring files are included only once.

        #pragma once  // include guard alternative

        // Control struct packing
        #pragma pack(push, 1)
        struct PackedStruct {
            char c;
            int i;
        };
        #pragma pack(pop)

        // Constrol specific compiler warnings (GCC/Clang)
        #pragma GCC diagnostic ignored "-Wconversion"
        
        



/**
 * Compiler Directives:
 *   -  These are instructions to the compiler about namespaces and symbol usage. 
 *      They're part of the C++ language and affect symbol visibility during compilation.
 * 
 *   -  They do not start with a hash (#)
 */

    // 1) Using Declaration
    //    - Introduces a specific symbol (function, variable, type) 
    //      from a namespace into the current scope, 
    //      avoiding the full namespace qualitication each time.

        using std::cout;
        using std::endl;

        int main_func3() {
            cout << "hello" << endl;            
            return 0;
        }

    // 2) Using Directive
    //    - makes all namess within a specified namespace accessible 
    //      without the namespace qualifier.

        using namespace std;

        int main_func4() {
            vector<int> nums = {1,2,3};
            cout << nums.size() << endl;
            return 0;
        }

    // 3) Namespace Alias Directive
    //    - Creates an alternative, shorter alias for an existing namespace, 
    //      simplifying long namespace qualifiers.

        namespace MyVeryLongNamespace {
            void greet() { std::cout << "Hi!" << std::endl; }
        }

        // Compiler directive (alias)
        namespace shortNS = MyVeryLongNamespace;

        int main_func5() {
            shortNS::greet;
            return 0;
        }

    /**
     * Namespace: 
     *      - Mainly used for organization and avoiding nameing conflicts.
     *      - Do not represent objects or entities.
     */

            namespace Logging {
                void log(const std::string& message) {
                    std::cout << "[LOG] " << message << std::endl;
                }
            }
            namespace Debugging {
                void log(const std::string& message) {
                    std::cout << "[DEBUG] " << message << std::endl;
                }
            }
            int main_func6() {
                Logging::log("System initalized");
                Debugging::log("Value of x: 42");
                return 0;
            }
