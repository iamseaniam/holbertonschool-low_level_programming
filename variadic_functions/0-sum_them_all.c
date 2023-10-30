#include <stdarg.h>
#include ""

int sum_them_all(const unsighned int n, ...)
{
	int sum = 0;
	va_list args;
	va_start(args, n);
	unsigned int i;

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

	