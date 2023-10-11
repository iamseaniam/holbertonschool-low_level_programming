#include "main.h"
/**
 *_strlen_recursion - Recursively calculates the length of a string.
 *@s: A pointer to the string for which the length is to be determined.
 *
 *Description: This function takes a pointer to a string 's' and recursively
 *calculates and returns the length of the string. It counts the number of
 *characters in the string until it reaches the null terminator character.
 *
 *Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
