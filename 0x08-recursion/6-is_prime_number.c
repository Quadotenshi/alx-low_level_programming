#include "main"
/**
 * is_prime - check if number is prime
 * @n: integer
 * @i: integer to interate
 *
 * Return: 1 if prime 0 if otherwise
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		return (is_prime(n, ++i));
	}
	return (1);
}

/**
 * is_prime_number - check for prime
 * @n: integer
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (is_primt(n, 2));
}
