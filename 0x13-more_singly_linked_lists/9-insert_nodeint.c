#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - Inserts node at a given index
 *@head: Pointer to head node
 *@idx: Index of list where new node should be added,it starts at 0.
 *@n: Data to be added in the node
 *Return: New node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *prev;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	prev = NULL;
	for (i = 0; i < idx && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (i < idx)
	{
		free(new);
		return (NULL);
	}
	new->next = temp;
	prev->next = new;
	return (new);
}
