#include "main.h"

/**
 *_pow_recursion - Raise to power recursion
 *@x: Base to be used
 *@y: Power integer
 *
 *Return: Raised to power result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
