#include "main.h"
/**
 * _memset - fills he first byte
 * @s: pointer to memory
 * @b: constant
 * @n: byte size
 *
 * Return: a pointer to mem
 *
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
