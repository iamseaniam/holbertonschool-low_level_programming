#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the program
*
* Description:
* This program demonstrates the use of the putchar function to print
* lowercase English alphabets.
*
* Return:
* Always 0 (Success)
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
