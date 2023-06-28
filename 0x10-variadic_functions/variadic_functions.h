#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - Defines printing behaviour
 *@sign: For indicating data type of argument
 *@func: Correspoding print function
 */
typedef struct print
{
	char *sign;
	void (*func)(va_list arg);
} print_t;

#endif /* VARIADIC_FUNCTIONS_H */
