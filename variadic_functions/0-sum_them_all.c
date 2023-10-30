#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - Returns the sum of all its parameters.
 *@n: The number of parameters.
 *@...: The variable number of parameters.
 *
 *Description: This function takes the number of parameters @n and a variable
 *number of arguments using the ellipsis (...) syntax. It returns
 *the sum of all the parameters. If @n is 0, it returns 0.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
