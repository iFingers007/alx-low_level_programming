#include "main.h"

/**
 *rev_string - Reverses a string
 *@s: String to bereversed
 *
 *Return: void
*/

void rev_string(char *s)
{
	int j;
	int i = 0, len = 0;
	char t;

	while (s[i++])
		len++;
	for (i = 0, j = len -1; i < j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
