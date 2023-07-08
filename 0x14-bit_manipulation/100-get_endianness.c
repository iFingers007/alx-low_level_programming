#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *get_endianness - Gets the endianness of a system
 *
 *Return: 1 if its little endian and 0 if its big endian
*/

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *ptr = (unsigned char *)&num;

	if (*ptr == 1)
		return (1);
	else
		return (0);

}
