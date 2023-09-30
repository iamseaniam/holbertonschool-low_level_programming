#include <stdio.h>
#include "main.h"
/*
* _isdigit - Check if a character is a digit (0-9)
* @c: The character to be checked
*
* Description: This fuction checks whether a given character is a digit (0-9).
*
* Return: 1 if c is a digit, 0 otherwise.
*/
void print_numbers(void)
{
	int number = 1;

	while (number <=9)
	{
		printf("%d ", number);
		number++;
	}

	return (0);
}
