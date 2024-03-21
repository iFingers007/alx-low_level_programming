#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *@head: Pointer to head pointer
 *@n: Data to be added
 * Return: Pointer to the new node or Null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new != NULL)
		new->n = n;
	else
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		temp->prev = new;
		new->next = *head;
		*head = new;
	}

	return (new);
}
