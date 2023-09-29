#include <stdio.h>
#include "main.h"
/*
 * _isupper - Check if a character is uppercase.
 * @c: The charater to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	char character = 'A';

	if (_isupper(character))
	{
		printf("%c is uppercase\n", character);
	}
	else
	{
		printf("%c is not uppercase\n", character);
	}

	return (0);
}
