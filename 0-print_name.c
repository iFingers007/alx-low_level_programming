#include "function_pointers.h"

/**
 *print_name - For printing name
 *@name: Name to be printed
 *@f: function pointer argument
 *Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
