#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Intro to the program
 *@argc: Integer argument count
 *@argv: Argument vector
 *
 *Return: Zero on succes
 */

int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		puts("0");
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
