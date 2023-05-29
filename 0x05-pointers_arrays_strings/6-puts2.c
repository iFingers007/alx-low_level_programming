#include "main.h"

/**
 *puts2 - Outputs a every other character of a string, starting with the first
 *character, followed by a new line.
 *@str: String to be printed
 *
 *Return: void
*/

void puts2(char *str)
{
	int i = 0, len = 0;

	while(str[i++])
		len++;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
