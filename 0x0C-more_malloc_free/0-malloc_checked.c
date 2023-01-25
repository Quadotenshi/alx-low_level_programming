#include "main.h"
/*
 **malloc_checked - array that prints strings
 * @b: number of memory
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(96);
	}
	return (p);
}
