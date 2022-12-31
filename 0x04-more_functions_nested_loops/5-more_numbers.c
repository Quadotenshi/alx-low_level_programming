#include "main.h"
/**
 * more_numbers - print numbs multiple times
 *
 * Return: return
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 15; j++)
		{
			if (j >= 10)
			_putchar('j');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
