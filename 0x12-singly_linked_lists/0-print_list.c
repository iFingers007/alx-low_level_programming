#include "lists.h"
#include <stdio.h>

/**
 *print_list - Prints elements of a linked list
 *@h: Head of list
 *
 *Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		n++;
		h = h->next;
	}
	return (n);

}
