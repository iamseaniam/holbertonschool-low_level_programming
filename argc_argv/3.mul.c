#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This function multiplies two numbers provided as command-line a
 *
 *  Return: 0 if successful, 1 if there are not enough arguments
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
