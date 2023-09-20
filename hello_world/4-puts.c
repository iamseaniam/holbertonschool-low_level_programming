#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
* Description: This program demonstrates the use of the puts function.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char str1[53];/* Make sure it can hold the entire string */

	strcpy(str1, "\"Programming is like building a multilingual puzzle");
	puts(str1);
	return (0); /* Return 0 to indicate successful execution */
}
