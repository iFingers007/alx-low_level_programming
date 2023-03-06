#include "main.h"
#include <string.h>

/**
 * _memcpy - Personal Memset
 *@src: Source of memory area
 *@dest: Destination memory area
 *@n: Bytes to be copied
 *Return: Pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pszDest = (char *)dest;
	char *pszSource = (char *)src;

	if ((pszDest != NULL) && (pszSource != NULL))
	{
		while (n)
		{
			*(pszDest++) = *(pszSource++);
			--n;
		}
	}
	return (dest);
}
