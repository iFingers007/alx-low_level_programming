#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *_strlen - Gets length of a string
 *@s: string argument
 *
 *Return: Lenght of string
*/

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 *add_node - Adds node at beginning of list
 *@head: Pointer to head of list
 *@str: string to be added
 *
 *Return: Pointer to begining
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->next = *head;
		*head = new_node;
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		return (new_node);
	}
	else
		return (NULL);

}
