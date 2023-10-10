#include <stdio.h>
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	char *destStart = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';

	return (destStart);
}
