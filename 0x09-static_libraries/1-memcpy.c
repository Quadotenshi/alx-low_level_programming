#include "main.h"
/**
 * _memcpy - fills the first byte
 * @dest: pointer to mem area to be copied
 * @src: pointer to mem area to copy
 * @n: byte size
 *
 * Return: a pointer to the mem area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	while (n--)
		*pdest++ = *src++;
	return (dest);
}
