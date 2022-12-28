#include "main.h"
/**
 * print_sign - just to find signs
 * @ch: my character as usual
 * Return: to return 1 or 0
 */

int print_sign(int ch)
{
	if (ch > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (ch == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
