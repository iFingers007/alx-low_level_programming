#include "main.h"

/**
 *print_sign - Prints sign of a nuber
 *@n: Integer argument
 *
 *Return: Integer to show sign
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
