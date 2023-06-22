#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_numbers - Prints number and separated
 *@separator: Character separator
 *@n: Number of arguments
 *
 *Return: Void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p_list;

	va_start(p_list, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(p_list, unsigned int));
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p_list);
}
