#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 print_numbers - Prints numbers, followed by a new line.
 *@separator: The string to be printed between numbers.
 *@n: The number of integers passed to the function.
 *@...: The variable number of integers.
 *
 *Description: This function takes a separator string @separator and a number
 *of integers @n. It prints the integers separated by the
 *separator string, and adds a new line at the end. If @separator
 *is NULL, it doesn't print it.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n -1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
