#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to be printed
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	ul i;
	hash_node_t *node;
	int first;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
