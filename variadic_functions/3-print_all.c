#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;
	int firstArg = 1;

	if (format == NULL)
	{
		return;
	}

	va_start(args, format);

	while (*ptr)
	{
		if (!firstArg && *ptr != ' ')
		{
			printf(", ");
		}

		switch (*ptr)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", (s == NULL) ? "(nil)" : s);
			break;
		}
		ptr++;
		firstArg = 0;

	}
	va_end(args);
	printf("\n");
}

