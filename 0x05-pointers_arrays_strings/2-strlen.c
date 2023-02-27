#include "main.h"
#include <stddef.h>

/**
 * _strlen - Returns the length of a string
 * @str: string.
 *
 * Return: Length.
 */
int _strlen(char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
