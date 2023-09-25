#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program demonstrates the use of the putchar function to print
 * lowercase English alphabet without the letters 'q' and 'e.'
 *
 * Return:
 * Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');

	return (0);
}
