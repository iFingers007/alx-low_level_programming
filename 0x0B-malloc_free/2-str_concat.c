#include "main.h"

/**
 * str_concat - Concatenates two strings
 *@s1: Destination string
 *@s2: Source string
 *Return: Memory address allocated or Null if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	p = malloc(sizeof(char) * ((len1 + len2) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (i = len1, j = 0; s2[j] != '\0'; i++, j++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}

/**
 * _strlen - Gets length of a string
 *@str: String to find length
 *
 *Return: Length of string
 */

int _strlen(char *str)
{
	unsigned int l = 0;

	if (*str == '\0')
		return (0);
	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}
