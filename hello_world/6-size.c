#include <stdio.h>

/**
* main - Entry point
*
* Description: This program demostrates the use of the printf function.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %d bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu bytes\n", sizeof(charType));

	return (0);
}
