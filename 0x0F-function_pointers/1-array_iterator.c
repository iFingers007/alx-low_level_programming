#include "function_pointers.h"

/**
 * array_iterator - Array iterator
 *@array: Array to iterate
 *@size: Size of the array
 *@action: Function pointer to action function
 *
 *Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
