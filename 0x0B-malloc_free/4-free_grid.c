#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dim grid made by malloc
 * @grid: pointer to 2 dim array
 * @height: pointer array row
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
