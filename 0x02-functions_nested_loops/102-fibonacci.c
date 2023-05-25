#include "main.h"
#include <stdio.h>

/**
 *main - Entry Point of program
 *
 *
 *Return: Zero as success
*/

int main(void)
{
	int i, fn, sn, n;

	fn = 1;
	sn = 2;

	printf("%d, %d, ", fn, sn);
	for (i = 0; i < 48; i++)
	{
		n = fn + sn;
		printf("%d, ", sn);
		fn = sn;
		sn = n;
	}
	printf("\n");

	return (0);
}
