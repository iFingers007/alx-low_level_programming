#include "main.h"

/**
 *puts_half - Outputs half of a string
 *@str: String to be printed
 *
 *Return: void
*/

void puts_half(char *str)
{
	int i = 0, len = 0;
	int n;

	while (str[i++])
		len++;
	if ((len % 2) == 0)
		n = (len / 2);
	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
