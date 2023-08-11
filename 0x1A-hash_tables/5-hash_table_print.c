#include "hash_tables.h"

/**
 * hash_table_print - ThE function prints a Hash Table
 * @ht: ThE pointer to the hash Table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *Temp;
	unsigned int index = 0, firstPair = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (; index < ht->size; index++)
	{
		for (Temp = ht->array[index]; Temp != NULL; Temp = Temp->next)
		{
			if (firstPair == 1)
			{
				printf("'%s': '%s'", Temp->key, Temp->value);
				firstPair = 0;
			}
			else
			{
				printf(", '%s': '%s'", Temp->key, Temp->value);
			}
		}
	}
	printf("}\n");
}
