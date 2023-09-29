#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks endianess
 *
 *
 *Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned cahr *p = (unsigned char*)&num;

	if (*p == 1)
		return (1);
	else
		return (0);

}
