#include "main.h"

int _strlen_recursion(char *s);
int is_palindrome(char *s);
int c_palindrome(char *s, int len, int i);
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

/**
 *c_palindrome - Checks for palindrome
 *@s: String to be checked
 *@len: Length of strin to be checked
 *@i: Index of string
 *
 *Return: 1 if found and 0 if not found
*/

int c_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (c_palindrome(s, len, i + 1));
	return (0);
}

/**
 *is_palindrome - Checks for palindrome
 *@s: String to be checked
 *
 *Return: 1 if found and 0 if not found
*/

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen_recursion(s);

	if (!(*s))
		return (1);
	return (c_palindrome(s, len, i));
}
