#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - Prints a string
 *@separator: To separate the strings
 *@n: Number of arguments
 *Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;
	char *s;

	va_start(l, n);
	for (i = 1; i <= n; i++)
	{
		s = va_arg(l, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(l);
}
