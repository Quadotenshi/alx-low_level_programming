#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
	int num;
	char x;

	for (num = 0; num <= 9; num++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');

	return (0);
}
