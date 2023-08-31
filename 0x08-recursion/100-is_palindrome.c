#include "main.h"

/**
 * _strlen_recursion - Gets length of a string using recursion
 *@s: String input
 *
 *Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * chck_palindrome - Checks for palindrome
 *@s: String to be checked
 *@fn: First index
 *@ln: Last index
 *Return: 1 if it is and zero if it's not
 */

int chck_palindrome(char *s, int fn, int ln)
{
	if (fn == ln)
		return (1);
	if (s[fn] != s[ln])
		return (0);
	else
		return (chck_palindrome(s, s[fn + 1], s[ln - 1]));
}

/**
 * is_palindrome - Checks for palindrome
 *@s: String to be checked
 *
 *Return: 1 if it is and zero if it's not
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0)
		return (1);
	return (chck_palindrome(s, 0, len - 1));
}
