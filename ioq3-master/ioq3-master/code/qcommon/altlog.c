#include "altlog.h"
#include <stdarg.h>
#include <time.h>

logger my_log;

FILE *fp = NULL;
// ==========================================
// Put this at the beginning of the main() 
// Hint: In the sys_main.c file at line 273.
// This Opens the file for editing
// ==========================================

void fileOpen()
{
#ifndef RELEASE // Optimisation for Release build.

	fp = fopen("altlog.txt", "a"); // Will always add to the end of the file if it exists, will creat the file if it doesn't exist

	return fp;

#endif // Optimisation for Release build.
}

// ==========================================
// Put this just after the fileOpen!
// This Introduces the Logging!
// ==========================================
void Profiler()
{
#ifndef RELEASE // Optimisation for Release build.

	printf("Would you like to start logging?\n");
	printf("0 = Logging Off.\n");
	printf("1 = Logging to File.\n");
	printf("2 = Logging to Console.\n");
	printf("3 = Logging to Both.\n");
	printf("Please enter a number between 0 and 3!");

	// Scans the User input
	int loggingType;
	loggingType = scanf("%d", loggingType);
	my_log = loggingType;
	printf("%d", my_log);

	//This if statement prints the date and time into the text file.
	if (my_log = 1 || 3)
	{
		time_t mytime;
		mytime = time(NULL);
		fprintf(fp, "Date and Time of Logging: [%s]", ctime(&mytime));
	}

#endif // Optimisation for Release build.
}

// ==============================
// Variadic Function for logging
// ==============================
void altlog(const char *log, ...)
{
#ifndef RELEASE // Optimisation for Release build.

	// While the logging is on!
	if (my_log != 0)
	{
		va_list logList; // Creates the va_list.
		va_start(logList, log); // Begins the va_list.

		//Printing to the File
		if (my_log = 1 || 3)
		{
			vfprintf(fp, log, logList); // Prints to the file from the va_list
			fprintf(fp, "\n"); // New Line in the altlog file
		}

		//Printing to the Console
		if (my_log = 2 || 3)
		{
			vprintf(log, logList); // Prints to the console from the va_list
			printf("\n"); // New Line
		}
		va_end(log); //Ends the va_list.
	}

#endif // Optimisation for Release build.
}

// =========================================================
// Place at the end of the main
// Closes the file so we are unable to write to it anymore
// =========================================================
void fileClose()
{
#ifndef RELEASE // Optimisation for Release build.

	fclose(fp);

#endif // Optimisation for Release build.
}

