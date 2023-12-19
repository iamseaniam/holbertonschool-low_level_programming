#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flip_count = 0;

	while (xor)
	{
		flip_count += xor & 1;
		xor >>= 1;
	}

	return (flip_count);
}
