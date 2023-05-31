#include "main.h"

/**
 *_strcat - To concatenate two strings
 *@dest: Destination of the string
 *@src:  Source string to concatenate
 *
 *Return: Concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int i, l = 0;

	while (dest[l] != '\0')
		l++;
	for (i = 0; src[i] != '\0';)
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	dest[i] = '\0';

	return (dest);
}
