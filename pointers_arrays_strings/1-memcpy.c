#include <stddef.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_start = dest;
	while (n > 0) 
	{
		*dest++ = *src++;
		n--;
	}
	return dest_start;
}
