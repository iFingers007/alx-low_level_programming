#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints Binary from an unsigned int
 *@n: Unsigned int provided
 *
 *Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');


}
