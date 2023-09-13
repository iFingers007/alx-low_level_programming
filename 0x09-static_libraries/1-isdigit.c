#include "main.h"

/**
 *_isdigit - To check for digits
 *@c: Argument to be checked
 *
 *Return: Integer value
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
