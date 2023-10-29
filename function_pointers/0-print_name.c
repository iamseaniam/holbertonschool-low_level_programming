#include "function_pointers.h"
#include <stdio.h>
/**
 *main - Entry point
 *
*Description: A simple C program that demonstrates the use of function pointers
 *to print a name to the console.
 *
 *
 * @print_name: does somthing
 * @name: also does somthing
 * @f: does some stuff
 *Return: 0 (Success
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
/**
 * print_to_console - Prints the name to the console
 *
 * @name: The name to be printed
 */
void print_to_console(char *name)
{
	printf("Name: %s\n", name);
}
