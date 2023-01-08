#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * @s: pointer to memory area
 * @b: constant byte
 * @n: byte size
 *
 * Return: a pointer to the mem area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
