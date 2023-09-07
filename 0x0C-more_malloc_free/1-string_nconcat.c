#include "main.h"

/**
 *string_nconcat - Concatenates n bytes of s2 to s1
 *@s1: Destination string
 *@s2: Source string
 *@n: Number of bytes to concatenate
 *Return: Memory address allocated or Null if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc((_strlen(s1) * n)  + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < n; i++, j++)
	{
		if (s2[j] != '\0')
			p[i] = s2[j];
	}
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
