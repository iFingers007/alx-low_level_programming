#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  searches for a value in an array of integers
 * using the jump search algorithm
 * @array: Array to be searched
 * @size: Size of array to be searched
 * @value: Value to be searched for
 * Return: Index of array or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump = (size_t)sqrt(size), low = 0;

	if (array == NULL)
		return (-1);

	while (low < size && array[low] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return ((int)low);
		low += jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low - jump, low);

	low -= jump;
	for (i = low; i < size && i < low + jump + 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
