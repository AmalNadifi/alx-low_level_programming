#include "hash_tables.h"

/**
 * hash_table_set - the function adds an Element to the hash table
 * @ht: The hash table to add/update thekey or value to
 * @key: ThE key
 * @value: ThE associated value with the key
 * Return: 1 (success) or 0 (failure)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *cpy_value;
	hash_node_t *new_node;
	unsigned long int index, itr;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	cpy_value = strdup(value);
	if (cpy_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (itr = index; ht->array[itr]; itr++)
	{
		if (strcmp(ht->array[itr]->key, key) == 0)
		{
			free(ht->array[itr]->value);
			ht->array[itr]->value = cpy_value;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(cpy_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = cpy_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
