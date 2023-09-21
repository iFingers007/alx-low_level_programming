#include "lists.h"
#include <string.h>

/**
 * len_node - Gets length of a string in a node
 *@str: String argument
 *
 *Return: Pointer to added node
 */

unsigned int len_node(char *str)
{
	unsigned int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 *@head: Pointer to head pointer
 *@str: String to be added
 *Return: Pointer to added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	if (head == NULL)
		return (NULL);
	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->next = *head;
	*head = p;
	p->str = strdup(str);
	p->len = len_node(p->str);
	return (p);

}
