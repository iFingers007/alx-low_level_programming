#include "main.h"

/**
 *  -
 *@:
 *
 *Return:
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
}
