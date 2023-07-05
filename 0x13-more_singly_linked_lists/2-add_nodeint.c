#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *add_nodeint - Adds a node at the begining of a list
 *@head: Head of list argument
 *@n: Value to be added
 *
 *Return: Addess to added node or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);

}
