#include "main.h"

int fsqrt(int, int);
int _sqrt_recursion(int);

/**
 *fsqrt - Finds square root
 *@num: Integer argument
 *@root: Assumed root
 *
 *Return: Natural Squareroot of the integer
*/

int fsqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == (num / 2))
		return (-1);
	return (fsqrt(num, root + 1));
}

/**
 *_sqrt_recursion - Prints square root recursively
 *@n: Integer argument
 *
 *Return: Natural Squareroot of the integer
*/

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (fsqrt(n, root));
}
