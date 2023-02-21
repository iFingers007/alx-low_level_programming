#include "main.h"
/**
 * _isalpha - For printing alphabetic character
 * *@c: character for argument
 *
 * Return: 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
