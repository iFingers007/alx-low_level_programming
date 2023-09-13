#include "3-calc.h"

/**
 *main - Intro to the program
 *@argc: Argument count
 *@argv: Argument vector
 *Return: Return zero on success or  otherwise
 */


int main(int argc, char **argv)
{
	int num1, num2, result;
	char *op;
	int (*operation)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	operation = get_op_func(op);

	if (operation == NULL)
	{
		puts("Error");
		exit(99);
	}
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
