#include "main.h"

/**
 * _pow_recursion - prints the factorial of an integer
 * @x: first integer
 * @y: second integer
 * Return: power of the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
		else if (y == 0)
		{
			return (1);
		}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
