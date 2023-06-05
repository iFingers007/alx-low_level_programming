#include "main.h"

/**
 *_memcpy - Copies a block of memory to another
 *@dest: Pointer to the destination
 *@src: Pointer to source memory block
 *@n: Bytes to be copied
 *
 *Return:
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dp = dest;
	char *sp = src;
	unsigned int i;

	for (i = 0; i < n; i++)
		dp[i] = sp[i];

	return (dest);
}
