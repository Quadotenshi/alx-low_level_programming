#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string
 * @s: pointer to string
 * @accept: substring
 *
 * Return: a pointer
 *
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
