#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Intro to main program
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: Always zero on success
*/

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul = mul * (atoi(argv[i]));
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
