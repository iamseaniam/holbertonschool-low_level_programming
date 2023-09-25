#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* main - Entry point
*
* Description: This program demonstrates the use of the putchar function.
*
* Return: Always 0 (Success)
*/
int main(void)

{

	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
