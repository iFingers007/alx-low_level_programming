#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - Initializes a variable
 *@d: Struct name
 *@name: Dog name
 *@age: Age of dog
 *@owner: Dog owner
 *
 *Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
