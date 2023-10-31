#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - Prints strings, followed by a new line.
 *@separator: The string to be printed between the strings.
 *@n: The number of strings passed to the function.
 *@...: The variable number of strings.
 *
 *Description: This function takes a separator string @separator and a number
 *of strings @n. It prints the strings separated by the separator
 *string, and adds a new line at the end. If @separator is NULL,
 *it doesn't print it. If one of the strings is NULL, it prints
 *"(nil)" instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
