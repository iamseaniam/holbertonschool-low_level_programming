#include "main.h"
#include <stdio.h>
/**
 * Stuff
 */

char *_strcat(char *dest, char *src) 
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return result;
}

int main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "world!";

	printf("Before concatenation: %s\n", str1);

	_strcat(str1, str2);

	printf("after concatenation: %s\n", str1);

	return (0);
}
