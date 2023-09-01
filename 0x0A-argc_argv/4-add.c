#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *chck_dig - To check if a string is a digit
 *@s: String to be checked
 *
 *Return: 1 if true and 0 if false
 */

int chck_dig(char *s)
{
	while(*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
/**
 *main - Intro to the program
 *@argc: Integer argument count
 *@argv: Argument vector
 *
 *Return: Zero on succes
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!chck_dig(argv[i]))
			{
				puts("Error");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);


	return (0);
}
