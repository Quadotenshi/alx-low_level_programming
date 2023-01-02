#include "main.h"
/**
 * _memcpy - fills the first byte in mem
 * @dest: copy destination
 * @src: source of copy
 * @n: byte size
 *
 * Return: pointer to memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	while(n--)
		*pdest++ = *src++;

	return (dest);
}
