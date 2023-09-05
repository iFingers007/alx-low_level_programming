#include "main.h"

/**
 * free_grid - Frees allocated memory
 *@grid: Grid to be freed
 *@height: Height to be freed
 *Return: Void
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
