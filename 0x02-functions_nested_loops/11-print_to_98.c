#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Prints fron n till 98
 *@n: Integer argument to start from
 *
 *Return: void
*/

void print_to_98(int n)
{
	if(n >= 98)
	{
		while (n > 98)
			printf("%d ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
