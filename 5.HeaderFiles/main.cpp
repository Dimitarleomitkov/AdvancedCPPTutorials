// Declarations go in Header files.
#include <iostream>
// The C standard library has .h extension. The C++ does not.
#include "Log.h"
/* When including a header file, the path matters.
   <> are used to look in the include folders set up for the
   compiler. "" are used to search relatively to the current
   directory of the file. */

using namespace std;

int main()
{
    InitLog();
    Log ("Hello, World!");
    return 0;
}
