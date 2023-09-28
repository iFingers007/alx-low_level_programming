#include "lists.h"
#include <stdio.h>

/**
 *binary_to_uint - Converts binary to unsigned int
 *@b:Pointer to string of 0 and 1 Char
 *
 *Return: Convered number in unsigned int or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			res = res * 2;
		else if (b[i] == '1')
			res = res * 2 + 1;
		else
			return (0);
	}
	return (res);

}
