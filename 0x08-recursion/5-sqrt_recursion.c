#include "main.h"

/**
 *root_rec - Getting the recursive root of a number
 *@x: Number argument
 *@r: Assumed root
 *Return: Natural root or -1
 */

int root_rec(int x, int r)
{
	if ((r * r) > x)
		return (-1);
	else if ((r * r) == x)
		return (r);
	else
		return (root_rec(x, r + 1));
}

/**
 *_sqrt_recursion - Gets square root using recursion
 *@n: Integer argument
 *
 *Return: Square root of the number or -1 for error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (root_rec(n, 0));
}
