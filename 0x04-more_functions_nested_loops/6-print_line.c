#include "main.h"

/**
 *print_line - Prints line in terminal
 *@n: Number of times character appears
 *
 *Return: void
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
