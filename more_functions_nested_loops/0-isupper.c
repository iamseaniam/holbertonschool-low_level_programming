#include <stdio.h>
#include "main.h"
/*
 * This is the main function.
 * It serves as the entry point of the program.
 */
int main(void)
{
	char testChar = 'A';

	if (_isupper(testChar))
	{
		printf("%c is uppercase\n", testChar);
	}
	else
	{
		printf("%c is not uppercase\n", testChar);
	}

	return (0);
}
