#include <stdio.h>
/**
* main - Entry point of the FizzBuzz program.
*
* This program prints numbers from 1 to 100 according to the FizzBuzz rules.
*For multiples of three, it prints "Fizz." For multiples of five, Prints "Buzz"
* For numbers that are multiples of both three and five, it prints "FizzBuzz."
* Otherwise, it prints the number itself.
*
* Each number or word is separated by a space.
*
* Return: Always 0 (indicating success)
*/
int main(void)
{
	int i;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
