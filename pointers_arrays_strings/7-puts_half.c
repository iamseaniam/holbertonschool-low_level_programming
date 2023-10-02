#include "main.h"
/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: A pointer to a null-terminated string.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	start = length / 2;

	if (length % 2 != 0)
	{
		start = (length - 1) / 2;
	}
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
