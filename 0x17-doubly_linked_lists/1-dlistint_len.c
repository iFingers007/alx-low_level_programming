#include "lists.h"

/**
 *dlistint_len - Returns the number of elements in a linked dlistint_t list.
 *@h: Pointer to the head
 *
 *Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num += 1;
		h = h->next;
	}

	return (num);
}
