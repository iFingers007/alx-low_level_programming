#include "main.h"
#include <stdlib.h>

/**
 *  -
 *@:
 *
 *Return:
 */

int _strlen(char *str)
{
	unsigned int l = 0;

	if (str == NULL)
		return (0);
	while(*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}

/**
 * _strdup - Duplicates a string
 *@str: String to be duplicated
 *
 *Return:
 */

char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = str[i];
	return (p);
}
