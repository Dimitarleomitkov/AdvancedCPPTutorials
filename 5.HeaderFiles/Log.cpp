#include "Log.h"
#include <iostream>

/*
Implementation of the function InitLog()
params:
    void
return:
    void
*/

void InitLog ()
{
    // Without including a header (the definition of the function), this function is unknown.
    Log ("Initializing Log.");
}

/*
Implementation of the function Log()
params:
    const char* message
return:
    void
*/

void Log (const char* message)
{
    std::cout << message << std::endl;
}
