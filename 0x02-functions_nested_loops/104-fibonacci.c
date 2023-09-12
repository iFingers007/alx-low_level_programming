#include "main.h"
#include <stdio.h>

/**
 *main - Entry point of program
 *
 *
 *Return: Zero on success
*/

int main(void)
{
	unsigned long fn = 1, sn = 2, temp = 0, i = 2;

	printf("%lu, %lu, ", fn, sn);
	while (i < 98)
	{
		temp = fn + sn;
		fn = sn;
		sn = temp;
		i++;
		printf("%lu", sn);
		if (i < 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);

}
