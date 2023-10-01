#include "main.h"

/**
 * most_numbers - Prints numbers from 0 to 14, ten times, followed by a new line
 */
void most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' && digit != '4')
		{
			_putchar(digit);
		}
	}

	_putchar('\n');

}
