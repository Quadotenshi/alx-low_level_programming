#include "main.h"
/**
 * _isdigit - check digit 0 - 9
 * @c: number
 *
 * Return: 1 is integer else 0
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
