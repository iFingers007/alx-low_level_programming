#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Summing up of argument
 *@n: Number of argument
 *
 *Return: The sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list sum_list;

	va_start(sum_list, n);
	for (i = 0; i < n; i++)
		result += va_arg(sum_list, unsigned int);
	va_end(sum_list);

	return (result);
}
