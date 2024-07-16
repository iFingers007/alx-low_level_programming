#include "search_algos.h"

/**
 * binary_search -  searches for a value in an array of integers
 * using the binary search algorithm
 * @array: Array to be searched
 * @size: Size of array to be searched
 * @value: Value to be searched for
 * Return: Index of array or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_rec(array, value, 0, size - 1));
}
/**
 * binary_search_rec - Recursive binary search
 * @array: Array to be searched
 * @value: Value to be searched for
 * @l: left index
 * @r: right index
 * Return: Index of array or -1
 */
int binary_search_rec(int *array, int value, size_t l, size_t r)
{
	size_t i, mid;

	for (i = l; i <= r; i++)
	{
		if (i == l)
			printf("Searching in array: ");
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
		if (i == r)
			printf("\n");
	}
	mid = (l + r) / 2;

	if (l > r)
		return (-1);
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search_rec(array, value, l, mid - 1));
	else
		return (binary_search_rec(array, value, mid + 1, r));
}
