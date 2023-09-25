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
	int number = 0;

	while (number <= 10)
	{
		putchar(number + '0');
		number++;
	}

	putchar('\n');

	return (0);
}

