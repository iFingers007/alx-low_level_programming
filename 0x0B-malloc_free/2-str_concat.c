#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Concatenates two strings
 *@s1: Destination string
 *@s2: Source string
 *
 *Return: concatenated string or NULL at failure
*/

char *str_concat(char *s1, char *s2)
{
	size_t s1_len = 0, s2_len = 0, concatlen = 0;
	char *temp, *result, *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	temp = s1;
	while (*temp != '\0')
	{
		s1_len++;
		temp++;
	}
	temp = s2;
	while (*temp != '\0')
	{
		s2_len++;
		temp++;
	}
	concatlen = s1_len + s2_len;
	result = (char *)malloc(sizeof(char) * (concatlen + 1));

	if (result == NULL)
		return (NULL);
	p = result;
	while (*s1 != '\0')
	{
		*p = *s1;
		p++;
		s++;
	}
	for (p = result; *s2 != '\0'; s++)
		p++;
	*p = '\0';

	return (result);
}
