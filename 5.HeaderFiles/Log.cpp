#include "Log.h"
#include <iostream>

void InitLog ()
{
    // Without including a header (the definition of the function), this function is unknown.
    Log ("Initializing Log.");
}

void Log (const char* message)
{
    std::cout << message << std::endl;
}
