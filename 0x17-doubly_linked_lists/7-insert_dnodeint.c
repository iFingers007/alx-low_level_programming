#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *@h: Pointer to head pointer
 *@idx: Index of data to be added
 *@n: Data to be added
 *Return: Pointer to the current node or Null if it doesn't exist
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *temp, *new;
	unsigned int count = 0;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
        if (new == NULL)
                return (NULL);
	new->n = n;
	if (*h == NULL || idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (current != NULL && idx != 1)
	{
		current = current->next;
		idx--;
		count++;
	}
	if (idx > count)
		return (NULL);
	temp = current->next;
	current->next = new;
	temp->prev = new;
	new->next = temp;
	new->prev = current;

	return (new);
}
