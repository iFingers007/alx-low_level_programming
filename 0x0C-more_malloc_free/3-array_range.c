#include "main.h"

/**
 * array_range - creates an array of integers
 *@min: Minimum integer value of array
 *@max: Maximum value of array
 *Return: Integer memory
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(max * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		p[i] = i;
	return (p);
}
