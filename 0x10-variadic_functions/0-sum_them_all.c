#include "variadic_functions.h"

/**
 * sum_them_all - Sums up all the variadic integers
 *@n: Number of arguments
 *
 *Return: Sum of the arguments or Zero
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list sumint;

	va_start(sumint, n);
	if (n == 0)
		return (0);
	for (i = 1; i <= n; i++)
		sum += va_arg(sumint, unsigned int);
	va_end(sumint);
	return (sum);
}
