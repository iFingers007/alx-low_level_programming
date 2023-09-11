#include "dog.h"

/**
 * init_dog - Initialises a type of struct dog
 *@d: Dog String passed
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 *Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dg = d;

	if (d == NULL)
		return;
	dg->name = name;
	dg->age = age;
	dg->owner = owner;
}
