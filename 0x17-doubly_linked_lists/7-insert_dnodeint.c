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
	dlistint_t *current = *h, *new;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; current && i < idx -1; i++)
		current = current->next;
	if (!current)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = current->next;
	new->prev = current;
	if (current->next)
		current->next->prev = new;
	current->next = new;
	if (i == idx - 1 && !current->next)
		return (new);

	return (new);
}
