// Guards for not including this file multiple times. Also seen as #pragma once.
#ifndef LOG_H_INCLUDED
#define LOG_H_INCLUDED

/* Everywhere this header file is included the program knows the
   declaration of the functions listed below. It works as a straight
   copy and paste. */

/*
Implementation of the function Log()
params:
    const char* message
return:
    void
*/
void Log (const char* message);

/*
Implementation of the function InitLog()
params:
    void
return:
    void
*/
void InitLog ();

#endif // LOG_H_INCLUDED
