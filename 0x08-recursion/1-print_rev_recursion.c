#include "main.h"

/**
 *_print_rev_recursion - Reverse string in recursion
 *@s: String to be reversed
 *
 *Return: Void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
