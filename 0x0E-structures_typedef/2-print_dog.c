#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints struct dog info
 *@d: Struct dog argument passed
 *
 *Return: Void
 */

void print_dog(struct dog *d)
{
	struct dog *dg;

	if (d == NULL)
		return;
	dg = d;
	printf("Name: %s\n", dg->name == NULL ? "(nil)" : dg->name);
	printf("Age: %f\n", dg->age);
	printf("Owner: %s\n", dg->owner == NULL ? "(nil)" : dg->owner);
}
