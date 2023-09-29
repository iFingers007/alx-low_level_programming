#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Flip bits
 *@n: Number to be flipped
 *@m: Number to flip to
 *Return: Number of times to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m, count = 0;

	while (res != 0)
	{
		if (res & 1)
			count++;
		res >>= 1;
	}
	return (count);

}
