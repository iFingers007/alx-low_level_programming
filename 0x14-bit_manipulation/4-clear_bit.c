#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0
 *@n: Pointer to number
 *@index: Index begining from 0
 *Return: 1 on success or -1 at failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = ~(1UL << index);
	*n &= mask;
	return (1);

}
