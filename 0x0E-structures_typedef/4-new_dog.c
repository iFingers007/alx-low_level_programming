#include "dog.h"

/**
 * new_dog - It creates a new dog
 *@name: Name of new dog
 *@age: Age of new dog
 *@owner: Name of owner of dog
 *Return: Pointer to new dog or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
