#include "lists.h"

/**
 *print_dlistint - It prints all the elements of a dlistint_t list
 *@h: Pointer to the head
 *
 *Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num += 1;
		h = h->next;
	}

	return (num);
}
