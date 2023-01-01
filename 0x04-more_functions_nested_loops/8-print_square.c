#include "main.h"
/**
 * print_square - printing squares
 * @size: the size of the square as passed in
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 1;
		while (x <= size)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('a');
			}
			x++;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
