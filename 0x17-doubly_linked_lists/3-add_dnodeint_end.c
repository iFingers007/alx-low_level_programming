#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *@head: Pointer to head pointer
 *@n: Data to be added
 * Return: Pointer to the new node or Null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	new->n = n;
	if (*head == NULL)
		*head = temp = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp  ->next;
		}
		temp->next = new;
		new->prev = temp;
	}

	return (new);
}
