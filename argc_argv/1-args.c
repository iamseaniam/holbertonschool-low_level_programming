#include <stdio.h>
/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This function prints the number of command-line arguments
 * (excluding the program name), followed by a new line.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
