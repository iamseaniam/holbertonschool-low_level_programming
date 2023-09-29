#include <stdio.h>
#include "main.h"
/*
* _isupper - Check if a character is uppercase.
* @c: The character to be checked
*
* This function takes a character as input and
* checks if it is an uppercase letter.
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
