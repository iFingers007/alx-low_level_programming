#include "dog.h"

/**
 * free_dog - Free created copy
 *@d: Dog type to be freed
 *
 *Return: Void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return;
	}
}
