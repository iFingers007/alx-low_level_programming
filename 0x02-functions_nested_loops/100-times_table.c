#include "main.h"

/**
 *print_times_table - Prints the multiplication table
 *@n: Integer Argument
 *
 *Return: void
*/

void print_times_table(int n)
{
	int i, m, r;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				r = i * m;

				if (r <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((r % 10) + '0');
				}
				else if (r <= 99)
				{
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		;
	}
}
