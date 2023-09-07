#include "main.h"

/**
 * array_range - creates an array of integers
 *@min: Minimum integer value of array
 *@max: Maximum value of array
 *Return: Integer memory
 */
int *array_range(int min, int max)
{
	unsigned int *p, i, nmin, nmax;

	nmin = (unsigned)min;
	nmax = (unsigned)max;
	if (min > max)
		return (NULL);
	p =(unsigned int *)malloc(max * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = nmin; i <= nmax; i++)
		p[i] = i;
	return ((int *)p);
}
