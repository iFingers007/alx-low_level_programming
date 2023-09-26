#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 *@h:  Pointer to head of linked list
 *
 *Return: Number or nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	count++;
	return (count);
}
