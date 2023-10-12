#include "main.h"
#include <stdio.h>
#include <math.h>
/*
 *_pow_recursion - Calculate the power of a number using recursion
 *
 *@x: The base number
 *@y: The exponent
 *
 *This function recursively calculates x raised to the power of y.
 *
 *Return: The result of x^y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1 / (x * _pow_recursion(x, -y - 1)));
	}
}
