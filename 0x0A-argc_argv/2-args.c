#include "main.h"
#include <stdio.h>
/**
 *main - Intro to the program
 *@argc: Integer argument count
 *@argv: Argument vector
 *
 *Return: Zero on succes
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
