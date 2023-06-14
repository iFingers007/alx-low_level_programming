#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Concat two strings
 *@s1: Destination string
 *@s2: Source string
 *
 *Return: Concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	size_t s1_l = 0, s2_l = 0, con_len = 0;
	char *temp, *p, *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (temp = s1; *temp != '\0'; temp++)
		s1_l++;
	for (temp = s2; *temp != '\0'; temp++)
		s2_l++;
	con_len = s1_l + s2_l;
	result = malloc((con_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (p = result; *s1 != '\0'; s1++)
	{
		*p = *s1;
		p++;
	}
	for (; *s2 != '\0'; s2++)
	{
		*p = *s2;
		p++;
	}
	*p = '\0';
	return (result);
}
