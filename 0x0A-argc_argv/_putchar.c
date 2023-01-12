#include <unistd.h>
/**
 * _putchar - writes character to screen
 * @c: string char passed in as arg
 *
 * Return: returns 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
