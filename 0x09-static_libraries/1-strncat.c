#include "main.h"

/**
 *_strncat - To concatenate two strings using n byte of source
 *@dest: Destination of the string
 *@src:  Source string to concatenate
 *@n: Number of bytes to print
 *
 *Return: Concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, l = 0;

	while (dest[l] != '\0')
		l++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';

	return (dest);
}
