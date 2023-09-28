#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets value of a bit to 1 in a given index
 *@n: Pointer to number given
 *@index: Index to be set begining from 0
 *Return: 1 if succesful but -1if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);

}
