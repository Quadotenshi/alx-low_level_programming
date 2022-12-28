#include "main.h"
/**
 * _islower - will print in lower case
 *@ch: the character
 * Return: 1 if lettter is lower case 0 if not
 */

int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
