#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This function adds positive numbers provided as command-line ar
 *
 * Return: 0 if successful, 1 if there are errors or no numbers to add
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1) 
	{
		printf("0\n");
		return (0);
	}
	for ( i = 1; i < argc; i++)
	{
		int num = (0);

		for ( j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
		}
		sum += num ;
	}
	printf("%d\n", sum);

	return (0);
}
