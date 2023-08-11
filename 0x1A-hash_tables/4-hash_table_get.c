#include "hash_tables.h"

/**
 * hash_table_get - ThE function retrieves a value associated with a key.
 * @ht: ThE hash table to look into
 * @key: ThE key
 * Return: The associated value with the element (success) or NULL (failure)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *Node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	Node = ht->array[index];
	while (Node && strcmp(Node->key, key) != 0)
	{
		Node = Node->next;
	}
	return ((Node == NULL) ? NULL : Node->value);
}
