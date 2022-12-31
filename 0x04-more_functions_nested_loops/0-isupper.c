#include "main.h"
/**
 * _isupper - finds uppercase
 * @c: the character to be checked
 * Return: 0 for no, 1 for yes
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
