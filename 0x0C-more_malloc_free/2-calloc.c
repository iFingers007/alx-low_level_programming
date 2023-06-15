#include "main.h"
#include <stdlib.h>

/**
 *_memset - Fills memory with a constant byte
 *@s: pointer to the memory block
 *@b: Constant byte to be used
 *@n: Bytes of memory to fill
 *
 *Return: Pointer to filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 *_calloc - Calloc implementation
 *@nmemb: Number of array elements
 *@size: Size of the array
 *
 *Return: Void pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	_memset(a, 0, (nmemb * size));
	return (a);
}
