#include "main.h"
#include <stddef.h>

/**
 *_strchr - Seaches string for a character
 *@s: Given String
 *@c: Character to search for
 *
 *Return: First instance of the character
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == '\0')
		return (s);
	return (NULL);
}
