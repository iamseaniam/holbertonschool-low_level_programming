#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	int sum = 0;
	va_list args;
	va_start(args, n);

	for (i = 0; < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
