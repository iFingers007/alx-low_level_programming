#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *get_nodeint_at_index - Gets the value at a node in a linked list
 *@head: Linked list passed
 *@index: Index of node Starting at 0
 *
 *Return: Pointer to the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	size_t i;

	p = head;
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (p->next == NULL)
			return (NULL);
		p = p->next;
	}
	if (p == NULL)
		return (NULL);
	return (p);

}
