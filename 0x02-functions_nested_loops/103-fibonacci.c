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
	unsigned long int fn, sn, n, soe;
	int i;

	fn = 1;
	sn = 2;
	soe = 0;

	for (i = 0; i <= 33; ++i)
	{
		if (fn < 4000000 && (fn % 2) == 0)
			soe += fn;
		n = sn + fn;
		fn = sn;
		sn = n;
	}
	printf("%lu\n", soe);

	return (0);
}
