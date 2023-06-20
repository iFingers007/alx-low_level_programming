#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - Creates profike cid a new dog
 *@name: Name of new dog
 *@age: Age of dog
 *@owner: Dog owner
 *
 *Return: Pointer to new dog
*/

dog_t *new_dog(char *name, __attribute__((unused))float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t n_dog));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = name;
	n_dog->owner = owner;

	return (n_dog);
}
