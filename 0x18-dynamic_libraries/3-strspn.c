#include "main.h"

/**
 *_strspn - Gets the length of a prefix substring
 *@s: String
 *@accept: Substring
 *
 *Return: Number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found, i;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

	if (!found)
		return (count);
	count++;
	s++;
	}

	return (count);
}
