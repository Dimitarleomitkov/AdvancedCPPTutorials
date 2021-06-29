// Guards for not including this multiple times. Also seen as #pragma once.
#ifndef LOG_H_INCLUDED
#define LOG_H_INCLUDED

/* Everywhere this header file is included the program knows the
   declaration of the functions listed below. It works as a straight
   copy and paste. */

void Log (const char* message);

void InitLog ();

#endif // LOG_H_INCLUDED
