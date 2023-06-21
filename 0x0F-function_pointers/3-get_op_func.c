#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
*get_op_func - Function pointer to get operator
*@s: Operator argument
*
*Return: Pointer to function that corresponds to operator
*/

int (*get_op_func(char *s))(int x, int y)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if ((*(ops[i].op) == *s) && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
