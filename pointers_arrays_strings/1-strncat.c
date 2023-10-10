#include <stdio.h>
#include "main.h"

char *_strncat(char *dest, const char *src, int n)
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

	return destStart;
}

int main(void) 
{
	char dest[20] = "Hello, ";
	const char *src = "world!";

	_strncat(dest, src, 5);
	printf("%s\n", dest);

	return (0);
}
