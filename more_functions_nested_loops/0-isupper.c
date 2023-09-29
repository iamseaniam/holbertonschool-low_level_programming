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
