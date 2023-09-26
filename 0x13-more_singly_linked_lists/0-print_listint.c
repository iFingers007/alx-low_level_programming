#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a linked list
 *@h:  Pointer to head of linked list
 *
 *Return: Number or nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	count++;
	return (count);
}
