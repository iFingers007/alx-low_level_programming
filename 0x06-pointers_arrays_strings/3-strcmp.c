#include "main.h"

/**
 *_strcmp - Compares two strings
 *@s1: Pointer to first string
 *@s2: Pointer to second string
 *
 *Return: Integer
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
