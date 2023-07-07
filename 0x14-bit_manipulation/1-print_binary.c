#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *print_binary - Prints binary usingbitwise operators
 *@n: Unsigned integer argument to be converted
 *
 *Return: Void
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
