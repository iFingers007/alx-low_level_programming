#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *@array: Array argument
 *@size: Size of array
 *@cmp: Pointer to function to be used in comparing the values
 *Return: Index of when 1 is returned or -1 if none matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])  == 1)
			return (i);
	}
	return (-1);
}
