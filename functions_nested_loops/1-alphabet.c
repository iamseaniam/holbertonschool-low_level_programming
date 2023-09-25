#include <stdio.h>
#include <unistd.h>

int _putchar(char c) {
	return write(1, &c, 1);
}
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Description:
 * This function prints all lowercase letters from 'a' to 'z' and
 * then adds a new line character to start a new line.
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

int main(void)
{
	print_alphabet();
	return (0);
}
