#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *get_bit - For getting the bit at a particular position
 *@n: Value to get bit from
 *@index: Index starting from 0
 *
 *Return: Bit at index or -1 if error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
/* Base case of the recursive function */
	if (index == 0)
		return (n & 1);
	return (get_bit(n >> 1, index - 1));
}
