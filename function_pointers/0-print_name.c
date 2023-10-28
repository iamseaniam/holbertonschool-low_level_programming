#include "function_pointers.h"
#include <stdio.h>
/**
* main - Entry point
*
* Description: A simple C program that demonstrates the use of function pointers
* to print a name to the console.
*
*Return: 0 (Success)
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
void print_to_console(char *name)
{
	printf("Name: %s\n", name);
}
int main()
{
	char name[] = "John Doe";
	print_name(name, print_to_console);
	return (0);
}
