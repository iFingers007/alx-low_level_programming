#include "main.h"

/**
 *_strlen - Finding the length of a string
 *@s: String argument
 *
 *Return: Lenght
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
