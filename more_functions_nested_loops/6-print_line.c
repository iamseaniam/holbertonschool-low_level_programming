#include "main.h"
#include <stdio.h>
/**
* print_line - Prints a line of underscores in the terminal.
* @n: The number of underscores to print.
*
* If n is 0 or less, the function prints an empty line.
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}

}
