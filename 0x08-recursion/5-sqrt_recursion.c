#include "main.h"
/*
 * _sqrt_recursion - square root finder
 * @n: integer
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/*
 * _sqrt - natural square finder
 * @n: integer
 * @i: integer to iterate
 *
 * Return: sqr toot
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * 1) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, ++i));
}
