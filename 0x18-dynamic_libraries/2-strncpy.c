#include "main.h"
#include <string.h>
/**
 *_strncpy - Copies string
 *@dest: Pointer to Destination String
 *@src: Pointer to Source string
 *@n: Number of bytes to be copied
 *
 *Return: Pointer to destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
