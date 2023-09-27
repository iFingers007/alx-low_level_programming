#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes node at a given index
 *@head: Pointer to head node
 *@idx: Index of list where new node should be added,it starts at 0.
 *
 *Return: 1 at success or -1 at failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *now, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	now = *head;
	for (i = 1; i < index; i++)
	{
		if (now == NULL)
			return (-1);
		now = now->next;
	}
	temp = now->next;
	now->next = temp->next;
	free(temp);
	return (1);
}
