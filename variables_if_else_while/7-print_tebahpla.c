#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:
 * This program demonstrates the use of the putchar function print
 * lowercase English alphabets backwards
 *
 * Return:
 * Always 0 (success)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
