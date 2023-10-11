#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - Recursively prints a string in reverse.
 *@s: A pointer to the string to be reversed and printed.
 *
 *Description: This function takes a pointer to a string 's' and recursively
 *prints the characters of the string in reverse order, starting from the
 *end of the string and working its way towards the beginning.
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
