#include "main.h"
#include <stdlib.h>

/**
 *array_range - Create an array
 *@min: minimum array argument
 *@max: Maximum array range
 *
 *Return: array
*/

int *array_range(int min, int max)
{
	int i, range, *p;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	p = (int *)malloc(range * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		p[i] = min + i;
	return (p);
}
