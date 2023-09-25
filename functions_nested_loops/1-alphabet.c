#include <stdio.h>
#include "1-main.c"
#include "_putchar.c"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
	char word[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	
	for (i = 0; word[i] != '\0'; i++)
	{	
		_putchar(word[i]);
	}

	_putchar('\n');
}
