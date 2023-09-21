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

	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of long int: %lu bytes\n", sizeof(long int));
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of long long int: %lu bytes\n", sizeof(long long int));

	return (0);
}
