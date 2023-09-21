#include <stdio.h>

/**
* main - Entry point
*
* Description: This program demostrates the use of the printf function.
*
* Return: Always 0 (Success)
*/

int main(void)
{

	int n;

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
