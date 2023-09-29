#include <stdio.h>
#include "main.h"
/*
* _isupper - Check if a character is uppercase.
* @c: The character to be checked
*
* Description: Checks whether a given charater is an uppercase letter.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
