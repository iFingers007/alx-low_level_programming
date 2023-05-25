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
	for (i = 0; i < 49; i++)
	{
		n = fn + sn;
		if (i < 48)
			printf("%ld, ", sn);
		else
			printf("%ld", sn);
		fn = sn;
		sn = n;
	}
	printf("\n");

	return (0);
}
