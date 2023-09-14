#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints a variadic list with a separator
 *@separator: String to use in separating numbers
 *@n: Number of arguments
 *Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 1; i < n; i++)
	{
		if (separator == NULL)
		{
			;
		}
		printf("%d%s", va_arg(list, unsigned int), separator);
	}
	printf("%d", va_arg(list, unsigned int));
	printf("\n");
	va_end(list);
}
