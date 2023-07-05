#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *insert_nodeint_at_index - Adds a node at the index of a list
 *@head: Head of list argument
 *@idx: Lit index starting from 0
 *@n: Value to be added
 *
 *Return: Addess to added node or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp, *prev_node;
	unsigned int i;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	prev_node = NULL;
	for (i = 0; temp != NULL && i < idx; i++)
	{
		prev_node = temp;
		temp = temp->next;
	}
	if (i < idx)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp;
	prev_node->next = newnode;

	return (newnode);
}
