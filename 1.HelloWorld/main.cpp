/* Preprocessor statement.
   During the compilation the contents of the file iostream will be
   copied over to this main.cpp file. The file iostream is needed for
   cout and cin to work. */
#include <iostream>

using namespace std;

// The entry point of every program is the main function
int main()
{
    /* Print "Hello world!" on the screen and end the line.
       The operator << can be viewed as a function. */
    cout << "Hello world! Go read about the compiler and linker. How do they work?" << endl;
    return 0;
}

/* The code then gets compiled into object files and further into
   an executable file. This can all be set up for the compiler.
   All the magic happens within the compiler and the liner. Information
   on this can be found elsewhere. I am not about to write a book in
   this comment section. */