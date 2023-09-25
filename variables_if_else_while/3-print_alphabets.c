#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
*
* Description:
* This program demonstrates the use of the putchar function to print both
* lowercase and uppercase English alphabets.
*
* Return:
* Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';
	char Alphabet = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	while (Alphabet <= 'Z')
	{
		putchar(Alphabet);
		Alphabet++;
	}
	putchar('\n');

	return (0);
}
