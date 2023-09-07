#include "main.h"

/**
 * array_range - creates an array of integers
 *@min: Minimum integer value of array
 *@max: Maximum value of array
 *Return: Integer memory
 */
int *array_range(int min, int max)
{
	int *p, i, size;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	p = (int *)malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		p[i] = min + i;
	return (p);
}
