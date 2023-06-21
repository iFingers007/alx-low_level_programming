#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - Adds two integers
 *@a: First Integer Argument
 *@b: Second Argument
 *
 *Return: Integer Value
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Substracts Two integers
 *@a: First Integer Argument
 *@b: Second Argument
 *
 *Return: Value of Substraction
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Multiplies Two integers
 *@a: First Integer Argument
 *@b: Second Argument
 *
 *Return: Value of Multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Divides Two integers
 *@a: First Integer Argument
 *@b: Second Argument
 *
 *Return: Value of Division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - Divides Two integers
 *@a: First Integer Argument
 *@b: Second Argument
 *
 *Return: Value of Remainder
*/

int op_mod(int a, int b)
{
	return (a % b);
}
