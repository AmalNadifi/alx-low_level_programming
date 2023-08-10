#include "hash_tables.h"

/**
 * hash_table_create - The function Is creating a hash table
 * @size: ThE array size
 * Return: The pointer to the new created hash table (success)
 * or NULL (failure)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *myHT = malloc(sizeof(hash_table_t));
	unsigned long int itr = 0;

	if (myHT == NULL)
		return (NULL);
	myHT->size = size;
	myHT->array = malloc(sizeof(hash_node_t *) * size);
	if (myHT->array == NULL)
		return (NULL);
	for (; itr < size; itr++)
		myHT->array[itr] = NULL;

	return (myHT);
}
