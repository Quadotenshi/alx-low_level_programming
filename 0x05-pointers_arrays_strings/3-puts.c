#include "main.h"
/**
 * _puts - prints a string
 * @str: sting to be printed
 *
 * Return: nothing on success
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
