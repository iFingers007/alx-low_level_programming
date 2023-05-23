#include "main.h"

/**
 *print_last_digit - Prints the last digit of a given nuber
 *@n: Integer argument
 *
 *Return: Last number
*/

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar('0' + ld);

	return (ld);
}