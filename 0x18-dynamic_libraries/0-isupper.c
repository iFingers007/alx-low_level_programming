#include "main.h"

/**
 *_isupper - To check upper case
 *@c: Argument to be checked
 *
 *Return: Integer Argument
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
