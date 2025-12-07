// C++ program to illustrate the predefined macros
/*
Sum: 15
Predefined Macros
Predefined macros are special macros that are already built into the C++ compiler.
You don't need to define them — they are automatically available in your program.

The following are some commonly used predefined macros in C++:

__LINE__: This macro expands to the current line number in the source code.
__FILE__: This macro expands to the name of the current source file.
__DATE__: This macro expands to a string that represents the date of compilation.
__TIME__: This macro expands to a string that represents the time of compilation.
*/
#include <iostream>
using namespace std;

int main()
{

    // Display the current line number and the source file
    // name
    cout << "This is line " << __LINE__ << " in file "
         << __FILE__ << "\n";

    // Display the compilation date
    cout << "Compiled on " << __DATE__;

    return 0;
}