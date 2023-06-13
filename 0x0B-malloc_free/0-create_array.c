#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates an array and initialize with character
 *@size: Size of array
 *@c: Character to be used
 *
 *Return: Pointer to the array or NULL.
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
