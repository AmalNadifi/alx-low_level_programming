#include "hash_tables.h"

/**
 * key_index - ThE function gives the index o a given key
 * @key: ThE key
 * @size: ThE hash table array size
 * Return: The index within the hash table's array where the key/value
 * pair needs to be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
