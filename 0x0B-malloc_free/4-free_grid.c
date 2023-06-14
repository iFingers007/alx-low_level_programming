#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees allocated memiry
 *@grid: Array given to function
 *@height: Array height
 *
 *Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}

	free(grid);
}
