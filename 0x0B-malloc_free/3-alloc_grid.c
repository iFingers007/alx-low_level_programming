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
		p[i] = (int *)malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;

	return (p);
}
/*
#include "main.h"
*/
/**
 *_memset - Fills memory with a constant byte
 *@s: pointer to the memory block
 *@b: Constant byte to be used
 *@n: Bytes of memory to fill
 *
 *Return: Pointer to filled memory area
*/

/*char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
*/
