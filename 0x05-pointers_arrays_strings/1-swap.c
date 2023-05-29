#include "main.h"

/**
 *swap_int - Swaps two numbers
 *@a: First number
 *@b: Second Number
 *
 *Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
