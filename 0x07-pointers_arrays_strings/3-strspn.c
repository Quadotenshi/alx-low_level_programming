#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix
 * @s: pointer to string
 * @accept: substring to be located
 *
 * Return: number of bytes
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
		return (len);
	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
