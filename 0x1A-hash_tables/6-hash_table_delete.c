#include "hash_tables.h"

/**
 * hash_table_delete - ThE function deletes a hash Table
 * @ht: ThE pointer to a hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *Node, *Temp;
	hash_table_t *ptr = ht;
	unsigned long int x = 0;

	for (; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			Node = ht->array[x];
			while (Node != NULL)
			{
				Temp = Node->next;
				free(Node->key);
				free(Node->value);
				free(Node);
				Node = Temp;
			}
		}
	}
	free(ptr->array);
	free(ptr);
}
