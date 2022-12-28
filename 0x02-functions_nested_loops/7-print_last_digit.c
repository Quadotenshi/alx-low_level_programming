#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @num: my num input as usual
 * Return: return the last digit of the number
 */

int print_last_digit(int num)
{
	int x = num % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (0);
}
