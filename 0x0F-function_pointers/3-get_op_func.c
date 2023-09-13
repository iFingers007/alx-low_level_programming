#include "3-calc.h"

/**
 * get_op_func - For selcting the function to use
 *@s: Operator passed as argument
 *
 *Return: Pointer to function selected
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	puts("Error");
	exit(99);
}
