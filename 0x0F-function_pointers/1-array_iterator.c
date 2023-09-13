#include "function_pointers.h"

/**
 *  -
 *@:
 *
 *Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
