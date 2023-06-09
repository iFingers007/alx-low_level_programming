#include "main.h"
#include <stdio.h>

/**
 *main - Intro to main program
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: Always zero on success
*/

int main (int argc, char *argv[])
{
	while(argc--)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
