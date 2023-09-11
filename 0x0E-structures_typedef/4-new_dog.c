#include "dog.h"

/**
 * slen - Gets let of string
 *@s: String to be copied
 *
 *Return: Length of string
 */

int slen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * strcp - Copies string
 *@dst: Destination string
 *@src: String to be copied
 *
 *Return: Copied string
 */

char *strcp(char *dst, char *src)
{
	char *cp = dst;

	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	dst = '\0';
	return (cp);
}
/**
 * strdp - Duplicates string
 *@s: String to be copied
 *
 *Return: Duplicated string
 */

char *strdp(char *s)
{
	char *dp;

	if (s == NULL)
		return (NULL);
	dp = malloc(slen(s) + 1);
	if (dp == NULL)
		return (NULL);
	strcp(dp, s);
	return (dp);
}
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
	p->name = strdp(name);
	p->age = age;
	p->owner = strdp(owner);
	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	return (p);
}
