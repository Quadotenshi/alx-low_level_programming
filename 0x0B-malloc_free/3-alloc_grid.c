#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates a pointer to a 2 dim array of int
 * @width: arry column size
 * @height: array row size
 *
 * Return: a pointer to the array, NULL if fails
 */

int **alloc_grid(int width, int height)
{
	int **newAray, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	newArray = malloc(height * sizeof(int *));
	if (newArray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		newArray[i] = malloc(width * sizeof(int));
		if (newArray[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(newArray[i]);
			}
			free(newArray);
			return (NULL);
		}
		for (j = 0; j <= width; j++)
		{
			newArray[i][j] = 0;
		}
	}
	return (newArray);
}
