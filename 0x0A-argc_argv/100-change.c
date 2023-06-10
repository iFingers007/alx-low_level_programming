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
	int cents, ncoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	ncoins = 0;

	ncoins += cents / 25;
	cents %= 25;

	ncoins += cents / 10;
	cents %= 10;

	ncoins += cents / 5;
	cents %= 5;

	ncoins += cents / 2;
	cents %= 2;

	ncoins += cents;

	printf("%d\n", ncoins);

	return (0);
}
