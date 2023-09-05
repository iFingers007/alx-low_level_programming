#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates array of chars, and initializes it with a specific char
 *@size: Array size
 *@c: Character to be initialised with
 *Return: Ponter to array or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
