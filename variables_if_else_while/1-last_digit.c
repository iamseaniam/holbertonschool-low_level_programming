#include <stdio.h>
#include <time.h>
#include <stdlib.h>
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
	int lastDigit;

	srand(time(0)); /* Seed the random number generator with the current time */
	n = rand() - RAND_MAX / 2;

	lastDigit = abs(n) % 10;

	if (lastDigit > 5)
	{
		printf("Last diget of %d is %d and is greater than 5", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}

	return (0);
}
