#include "main.h"

/**
 *_strlen_recursion - Stringlength recursion
 *@s: String to be checked
 *
 *Return: Length in integer
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
