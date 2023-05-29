#include "main.h"
#include <stdio.h>

/**
 *print_array - Prints an array
 *@a: Array to be printed
 *@n: Number of elements in the array
 *
 *Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
