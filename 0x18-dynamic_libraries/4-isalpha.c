#include "main.h"

/**
 *_isalpha - Checks for alphabetic
 *@c: Argument to be checked
 *
 *Return: Integer
*/

int _isalpha(int c)
{
	if ((c >=  65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
