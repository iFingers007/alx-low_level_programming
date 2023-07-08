#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *flip_bits - Flips bits
 *@n: First Argument provided
 *@m: Second Argument
 *
 *Return: Number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int num = 0;

	while (result != 0)
	{
		if (result & 1)
			num++;
		result >>= 1;
	}
	return (num);
}
