#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @p: The specifier
 * @f: The function associated
 */
typedef struct pr
{
	char *p;
	void (*f)(va_list);
} pr_t;

/*function prototypes*/
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
