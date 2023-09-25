#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:
 * This program demonstrates the use of the putchar function to print
 * single digit numbers with ',' and ' '.
 *
 * Return:
 * Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
