#include "main.h"

/**
 * _puts_recursion - Puts function recursively
 *@s: String to give as output
 *
 *Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
