#include <stdlib.h>
#include "main.h"
/**
 * _strdup - creates duplicate of string
 * @str: a pointer to string
 *
 * Return: a pointer to array, NULL if fails
 */

char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, size = 0;

	if (!str)
	{
		return (NULL);
	}
	while (*(str + size++))
		;
	newstr = malloc(size * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			newstr[i] = str[i];
		}

	}
	return (newstr);
}
