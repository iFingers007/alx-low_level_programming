#include "hash_tables.h"

/**
 * key_index - Gives key index of a hash table
 * @key: Key to be searched
 * @size:  size of the array of the hash table
 *
 * Return:the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	ul index;

	index = hash_djb2(key) % size;

	return (index);
}
