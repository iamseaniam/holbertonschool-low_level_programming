#include "main.h"
#include <stdio.h>
/**
* print_diagonal - Prints a line of underscores in the terminal.
* @n: The number of back slashes to print.
*
* If n is 0 or less, the function prints an empty line.
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
