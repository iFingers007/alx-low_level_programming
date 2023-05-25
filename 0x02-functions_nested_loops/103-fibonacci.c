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

	for (i = 0; i <= 33; i++)
	{
		if (sn < 4000000 && (sn % 2 == 0))
			soe += sn;
		n = fn + sn;
		sn = fn;
		fn = n;
	}
	printf("%lu\n", soe);

	return (0);
}
