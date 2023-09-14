#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - Prints all datatype
 *@format: Format argument passed
 *
 *Return: Void
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list l;
	char *s, c;

	va_start(l, format);
	i = 0;
	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
		case 'c':
			printf("%c", va_arg(l, int));
			break;
		case 'i':
			printf("%d", va_arg(l, int));
			break;
		case 'f':
			printf("%f", va_arg(l, double));
			break;
		case 's':
			s = va_arg(l, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		default:
			break;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(l);
}
