#include "main.h"

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

#include "main.h"

/**
 **_calloc - allocates memory for an array
 *@nmemb: Number of elements in array
 *@size: Size of the array
 *Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	p = _memset(p, 0, (nmemb * size));
	return (p);
}
