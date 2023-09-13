#include "3-calc.h"

/**
 *op_add - Adds two numbers
 *@a: First number
 *@b: Second number
 *Return: Sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Gets the difference of two numbers
 *@a: First number
 *@b: Second number
 *Return: Difference of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Gets the product of two numbers
 *@a: First number
 *@b: Second number
 *Return: Product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Gets the division of two numbers
 *@a: First number
 *@b: Second number
 *Return: Division of the two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - Gets the remainder from the division of two numbers
 *@a: First number
 *@b: Second number
 *Return: Division of the two numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
