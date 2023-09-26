#include "lists.h"
#include <string.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *@head: Pointer to head pointer
 *@n: String to be added
 *Return: Pointer to added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->next = *head;
	*head = p;
	p->n = n;
	return (p);

}
