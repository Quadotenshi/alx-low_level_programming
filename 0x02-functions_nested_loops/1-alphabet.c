#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase using _putchar
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++;)
		_putchar(x);
	_putchar('\n');
	return (0);
}
