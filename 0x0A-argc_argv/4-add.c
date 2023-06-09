#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_digit(char *s);

/**
 *is_digit - Checks for digit
 *@s: string to check
 *
 *Return: Integer value
*/

int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 *main - Intro to main program
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: Always zero on success
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
