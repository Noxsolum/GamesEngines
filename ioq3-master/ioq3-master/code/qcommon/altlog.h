#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

#ifndef __altlog_h__
#define __altlog_h__

// ============================
// --- File Open and Close ---
// ============================
void fileOpen();
void fileClose();

// =======================
// --- Main Functions ---
// =======================
void Profiler();
void altlog(const char *log, ...);

// ==============
// --- Enums ---
// ==============
typedef enum
{
	altLogOff, altLogToFile, altLogToConsole, altLogToBoth

} logger;

#endif