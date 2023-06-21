#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *array_iterator - Iterates through each element of an array
 *@array: Arrau argument to be passed
 *@size: Size of the array
 *@action: pointer to function
 *
 *Return: Void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
