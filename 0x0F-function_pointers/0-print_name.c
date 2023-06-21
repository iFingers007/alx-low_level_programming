#include "function_pointers.h"

/**
 *print_name - Prints name
 *@name: Name argument to be printed
 *@f: funcion pointed to
 *
 *Return: Void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
