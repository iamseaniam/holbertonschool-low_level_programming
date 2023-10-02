#include "main.h"
/**
 * print_triangle - Prints a triangle of '#' character in the terminal.
 * @size: The size of the triangle
 *
 * If size is 0 or less, the function prints only a new line.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= i; j++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
