#include "main.h"
/**
 * _isupper - check uppercase
 * @c: char passed in
 *
 * Return: 1 if c is upper else 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
