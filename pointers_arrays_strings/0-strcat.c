#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * Stuff
 */

char *_strcat(char *dest, char *src);

int main(void)
{
	char src[50], dest[100];

	strcpy(src, "Hello, ");
	strcpy(dest, "World!");

	_strcat(dest, src);

	printf("Final destination string : |%s|", dest);

	return (0);

}
