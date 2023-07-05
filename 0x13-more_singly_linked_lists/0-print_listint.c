#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_listint - Prints the liked list
 *@h: Pointer to head
 *
 *Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
