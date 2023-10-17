/**
 * is_prime_recursive - Check if an integer is a prime number using recursion.
 * @n: The integer to be checked.
 * @divisor: The divisor being tested.
 *
 * Return: 1 if the integer is a prime number, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor <= 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor - 1));
}

/**
 *is_prime_number - Check if an integer is a prime number using recursion.
 *@n: The integer to be checked.
 *
 *Return: 1 if the integer is a prime number, 0 otherwise.
 *
 */
int is_prime_number(int n)
{
	if (n <= 1) 
	{
		return (0);
	}
	return (is_prime_recursive(n, n - 1));
}
