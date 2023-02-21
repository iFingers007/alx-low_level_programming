#include "main.h"
/**
 * print_last_digit - For printing sign absolute
 * *@n: int for the argument of function
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int b;

	if (n < 0)

	n = -n;
	b = n % 10;

	if (b < 0)
		b = -b;

	_putchar(b + '0');

return (b);

}
