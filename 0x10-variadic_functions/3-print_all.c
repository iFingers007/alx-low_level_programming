#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_strings - Prints strings and separate
 *@separator: Character separator
 *@n: Number of arguments
 *
 *Return: Void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list s_list;
	char *p;

	va_start(s_list, n);
	for (i = 1; i <= n; i++)
	{
		p = va_arg(s_list, char *);
		if (p != NULL)
			printf("%s", p);
		else
			printf("(nil)");
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s_list);
}
