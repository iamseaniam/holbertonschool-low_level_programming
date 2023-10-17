#include <stdio.h>
/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This function prints the name of the program.
 *
 * Return: Always 0
 */
int main (int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
