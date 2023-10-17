#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *  _pow_recursion - Calculate the power of a number using recursion.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y, or -1 for invalid input.
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
	else
	{
		return (-1);
	}
}
