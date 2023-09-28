#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns value of a bit at a given index
 *@n: Number
 *@index: Index of bit to be gotten stating from 0
 *Return: Value of bit at index or -1 at failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (index == 0)
		return (n & 1);
	return (get_bit(n >> 1, index - 1));


}
