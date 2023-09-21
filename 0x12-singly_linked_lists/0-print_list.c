#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all he elements of a linked list
 *@h:  Pointer to head of linked list
 *
 *Return: Number or nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	count++;
	return (count);
}
