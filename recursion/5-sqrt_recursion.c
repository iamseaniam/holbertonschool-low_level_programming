#include <math.h>
#include <stdio.h>
#include "main.h"

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
