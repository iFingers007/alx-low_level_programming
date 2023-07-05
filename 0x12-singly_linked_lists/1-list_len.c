#include "lists.h"
#include <stdio.h>

/**
 *list_len - Length of a list
 *@h: Head of list
 *
 *Return: Number of elements
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);

}