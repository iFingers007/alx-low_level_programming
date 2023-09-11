#include "dog.h"

/**
 * free_dog - Free created copy
 *@d: Dog type to be freed
 *
 *Return: Void
 */

void free_dog(dog_t *d)
{
	dog_t *p = d;

	if (d == NULL)
	{
		free(p);
		return;
	}
	p = NULL;
	free(p);
	free(d);
}
