#include "main.h"

/**
 *_puts - Outputs a strin followed by a newline
 *@str: String to be printed
 *
 *Return: void
*/

void _puts(char *str)
{
	while (*str++)
		_putchar(*str);
	_putchar('\n');
}
