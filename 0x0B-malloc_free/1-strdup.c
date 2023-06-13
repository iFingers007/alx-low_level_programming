#include "main.h"
#include <stdlib.h>

/**
 *_strdup - Duplicates a given string
 *@str: Size of array
 *
 *Return: Pointer to the space allocated in memory
*/

char *_strdup(char *str)
{
	size_t len = 0;
	char *s, *ns;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	len += 1;
	s = (char *)malloc(len);
	if (s != NULL)
	{
		ns = s;
		while (*str != '\0')
		{
			*ns++ = *str++;
		}
		*ns = '\0';
	}

return (s);
}
