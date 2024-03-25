#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - Searches a string for any of a set of bytes
 *@s: String to be searched
 *@accept: Substring
 *
 *Return: Pointer to matv=ch in s or Null
*/

char *_strpbrk(char *s, char *accept)
{
	char *a;

	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
				return (s);
		}
		s++;
	}

	return (NULL);
}
