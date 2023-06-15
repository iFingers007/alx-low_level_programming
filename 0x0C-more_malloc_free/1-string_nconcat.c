#include "main.h"
#include <stdlib.h>
/**
 *str_len - Get length of string
 *@s: Destination string
 *
 *Return: Lenght of string
*/

unsigned int str_len(char *s)
{
	unsigned int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 *string_nconcat - Concat two strings
 *@s1: Destination string
 *@s2: Source string
 *@n: Number of bytes of n to concatenate
 *
 *Return: Concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1l = 0, s2l = 0, conl = 0;
	char *p, *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1l = str_len(s1);
	s2l = str_len(s2);
	if (n >= s2l)
		conl = s2l;
	conl = s1l + n;
	res = malloc((conl + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	p = res;
	while (*s1 != '\0')
	{
		*p = *s1;
		p++;
		s1++;
	}
	while (n > 0)
	{
		*p = *s2;
		p++;
		s2++;
		n--;
	}
	*p = '\0';
	return (res);
}
