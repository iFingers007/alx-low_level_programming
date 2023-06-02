#include "main.h"

/**
 *rot13 - Encodes rot 13 into a string
 *@s: String
 *
 *Return: Rotated string
*/

char *rot13(char *s)
{
	int count = 0, i;
	char alpha[] = "a-z, A-Z";
	char rot13[] = "n-m, N-M";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alpha[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
