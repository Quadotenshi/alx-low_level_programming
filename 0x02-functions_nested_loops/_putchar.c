#include "main.h"
#include <unistd.h>

/**
 * main - _putchar writes to the output
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
