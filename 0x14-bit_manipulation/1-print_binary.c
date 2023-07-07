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

	unsigned long int ex = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int pos = sizeof(unsigned long int) * 8;

	while (pos > 0)
	{
		if (n & ex)
			_putchar('1');
		else
			_putchar('0');
		ex >>= 1;
		pos--;
	}
}
