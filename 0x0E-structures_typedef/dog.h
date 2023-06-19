#ifndef DOG_H
#define DOG_H

/**
 *struct dog - Structure datatype for dogs
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of dog
 *
 *Description: Storing information of dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dogs_t - Typedef for dogs struct
 */
typedef struct dog dogs_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif