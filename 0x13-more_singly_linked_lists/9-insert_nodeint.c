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
	listint_t *temp, *new;
	unsigned int i = 1;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(temp);
		return (NULL);
	}
	new->n = n;
	while (temp->next != NULL)
	{
		if (i == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
