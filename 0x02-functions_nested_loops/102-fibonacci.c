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
	int i;
	long fn, sn, n;

	fn = 1;
	sn = 2;

	printf("%ld, %ld, ", fn, sn);
	for (i = 0; i < 48; i++)
	{
		n = fn + sn;
		printf("%ld, ", sn);
		fn = sn;
		sn = n;
	}
	printf("\n");

	return (0);
}
