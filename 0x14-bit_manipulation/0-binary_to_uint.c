#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *binary_to_uint - Converts binary to unsigned int
 *@b: Binary string bit to be converted
 *
 *Return: Converted unsigned integer
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

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
