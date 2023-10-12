#include <math.h>
#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n)
{
	int root =sqrt(n);

	if (root * root == n)
	{
		return (root);
	}
	else
	{
		return (-1);
	}

}
