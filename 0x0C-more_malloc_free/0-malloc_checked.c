#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Allocates memory using malloc
 *@b: Size of memory
 *
 *Return: Pointer to allocated memory or exit status
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *p = malloc(b * sizeof(unsigned int));

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
