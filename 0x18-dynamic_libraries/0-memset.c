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
