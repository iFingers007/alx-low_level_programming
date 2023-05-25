#include "main.h"
#include <stdio.h>

/**
 *main - Entry point
 *
 *
 *Return: Always Zero at success
*/

int main(void)
{
	int i, r;

	for (i = 1; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			r += i;
	printf("%d\n", r);

	return (0);
}
