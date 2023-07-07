#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *set_bit - For Setting the bit at a particular position to 1
 *@n: Pointer to address where n is
 *@index: Index starting from 0
 *
 *Return: 1 if it worked or -1 if error occured
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= msk;
	return (1);
}
