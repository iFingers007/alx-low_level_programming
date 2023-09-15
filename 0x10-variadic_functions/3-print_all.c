#include "variadic_functions.h"
#include <string.h>

/**
 * print_c - Prints Character datatype
 *@arg: Variadic argument passed
 *
 *Return: Void
 */

void print_c(va_list arg)
{
	char c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_i - Prints integer datatype
 *@arg: Variadic argument passed
 *
 *Return: Void
 */

void print_i(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
 * print_f - Prints float datatype
 *@arg: Variadic argument passed
 *
 *Return: Void
 */

void print_f(va_list arg)
{
	double f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_s - Prints string datatype
 *@arg: Variadic argument passed
 *
 *Return: Void
 */

void print_s(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		printf("(nil)");
	printf("%s", s);
}

/**
 * print_all - Prints all datatype
 *@format: Format argument passed
 *
 *Return: Void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	va_list l;
	char *s = "";
	pr_t fp[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(l, format);
	i = 0;
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(fp[j].p)))
			j++;
		if (j < 4)
		{
			printf("%s", s);
			fp[j].f(l);
			if (j < 3)
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(l);
}
