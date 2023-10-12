#include <stdio.h>
#include "main.h"
/**
 *factorial - Calculate the factorial of a given number.
 *@n: The integer for which the factorial is calculated.
 *
 *Description: This function takes an integer 'n' and calculates its factorial.
*If 'n' is negative, it returns -1 to indicate an error.The factorial of 0 is 1
 *
 *Return: The factorial of 'n', or -1 if 'n' is negative.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
