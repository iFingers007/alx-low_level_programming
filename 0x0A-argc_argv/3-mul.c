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
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
