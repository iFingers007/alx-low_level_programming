#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - Searches an array
 *@array: Array to be checked
 *@size: Number of elements of the array
 *@cmp: Pointer to function to be used
 *
 *Return: 0 if false, soething else otherwise
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
