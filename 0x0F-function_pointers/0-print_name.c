#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - Prints name
 *@name: Name argument to be printed
 *@f: funcion pointed to
 *
 *Return: Void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
