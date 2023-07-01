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
	unsigned long fn = 1, sn = 2, temp = 0, i;

	printf("%lu, %lu", fn, sn);
	for (i = 1; i < 96; i++)
	{
		temp = fn;
		fn = sn;
		sn = temp + fn;
		printf(", %lu", sn);
	}
	printf("\n");

	return (0);

}
