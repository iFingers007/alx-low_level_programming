#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * *@src: Source String
 * *@n: integer in argument
 * Return: Copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	
	if (dest == NULL)
	{
		return (NULL);
	}

	while (*src && n--)

	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
