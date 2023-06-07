#include "main.h"

/**
 *factorial - Gets the factorial of a number
 *@n: Integer aargument
 *
 *Return: Factorial of number
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
