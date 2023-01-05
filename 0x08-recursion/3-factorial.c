#include "main.h"
/*
 * factorial - compute factorial
 * @n: integer
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	int fact;

	if (n > 0)
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
