#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - Entry to program
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: Zero on success
*/

int main(int argc, char *argv[])
{
	int x, y;
	char *op_func;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	op_func = argv[2];

	if (get_op_func(op_func) == NULL || op_func[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && y == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(op_func)(x, y));

	return (0);
}
