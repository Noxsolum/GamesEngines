#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#ifndef __altlog_h__
#define __altlog_h__

void fileOpen();

void fileClose();

void Profiler();

//void FPS();

void altlog(const char *log, ...);

typedef enum
{
	altLogOff, altLogToFile, altLogToConsole, altLogToBoth

} logger;

typedef enum
{
	PlayerPos, PlayerDeath, Other, Performance, Error, Debug
} tagging;
#endif