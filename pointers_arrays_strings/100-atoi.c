#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the input string.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			if (sign == 1)
			{
				return INT_MAX;
			}
			else
			{
				return INT_MIN;
			}
		}
			result = result * 10 + (s[i] - '0');
			i++;
		}

	return result * sign;
}
