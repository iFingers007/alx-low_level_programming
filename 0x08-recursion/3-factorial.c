#include "main.h"

/**
 * factorial - Gets the factorial of a given number
 *@n: Integer Argument
 *
 *Return: Factorial of the given number or -1 for -ve integers
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
