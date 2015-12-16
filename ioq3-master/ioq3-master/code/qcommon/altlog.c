#include "altlog.h"
#include <stdarg.h>
#include <time.h>

logger my_log;

FILE *fp = NULL;

// Put this at the beginning of the game - in the sys_main.c file at line 273.
void Profiler()
{
#ifndef RELEASE
	printf("Would you like to start logging?\n");
	printf("0 = Logging Off.\n");
	printf("1 = Logging to File.\n");
	printf("2 = Logging to Console.\n");
	printf("3 = Logging to Both.\n");
	int loggingType;

	loggingType = scanf("%d", loggingType);

	my_log = loggingType;

	printf("%d", my_log);
#endif
}


void altlog(const char *log, ...)
{
#ifndef RELEASE
	if (my_log != 0)
	{
		va_list logList;
		va_start(logList, log);
		if (my_log = 1 || 3)
		{
			vfprintf(fp, log, logList);
			fprintf(fp, "\n");
		}
		if (my_log = 2 || 3)
		{
			vprintf(log, logList);
			printf("\n");
		}
		va_end(log);
	}
#endif
}

void fileOpen()
{
#ifndef RELEASE

	fp = fopen("altlog.txt", "a");

	return fp;
#endif
}

void fileClose()
{
#ifndef RELEASE
	fclose(fp);
#endif
}

