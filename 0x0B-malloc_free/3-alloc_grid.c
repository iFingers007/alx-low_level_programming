#include "main.h"

/**
 * alloc_grid - Allocation of grid
 *@width: Width of matrix
 *@height: Height of matrix
 *Return: Null on failure or allocated memory
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(sizeof(int *) * (height));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		{
			if (p[i] == NULL)
				return (p);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;

	return (p);
}
