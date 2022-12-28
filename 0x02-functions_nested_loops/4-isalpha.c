#include "main.h"
/**
 * _isalpha - lowercase or uppercase
 *@ch: using ch as my character
 * Return: 1 or 0 for success or not
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}
