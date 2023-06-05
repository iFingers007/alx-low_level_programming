#include "main.h"
#include<stddef.h>

/**
 *_strstr - locates a substrimg
 *@haystack: String to be searched
 *@needle: Substring to search with
 *
 *Return: Pointer to location
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*h == *n && *h != '\0' && *n != '\0')
			{
				h++;
				n++;
			}
			if (*n == '\0')
				return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
