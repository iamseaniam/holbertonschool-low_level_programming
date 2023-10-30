#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - Prints a name using a function pointer.
 *@name: The name to be printed.
 *@f: Pointer to the function that will print the name.
 *
 *Description: This function takes a name and a function pointer as parameters
 *It checks if the function pointer is not NULL, and if so, it calls
 *the function passing the name as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
/**
 *print_to_console - Prints the name to the console.
 *@name: The name to be printed.
 *
 *Description: This function takes a name as a parameter and prints it to the console
 *using the printf function.
 */
void print_to_console(char *name)
{
	printf("Name: %s\n", name);
}
