#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_all - Prints anything.
 *@format: The format string specifying the types of arguments.
 *@...: The variable number of arguments.
 *
 *Description: This function takes a format string @format and a variable
 *number of arguments. It prints the arguments based on the
 *format string, which can contain the following specifiers:
 *- 'c' for char
 *- 'i' for integer
 *- 'f' for float
 *- 's' for char *
 *If a string is NULL, it prints "(nil)" instead.
 *Any other character in the format string is ignored.
 *It adds a new line at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char c;
	int num;
	float f;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str != NULL)
				{
					printf("%s", str);
				}
				else
				{
					printf("(nil)");
				}
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
		{
			printf(", ");
		}

		i++;
	}
	printf("\n");

	va_end(args);
}

