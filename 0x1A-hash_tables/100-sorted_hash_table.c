#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - ThE function creates a sorted Hash Table
 * @size: ThE hash table size
 * Return: The pointer to the created Hash Table ( success) or NULL (failure)
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	shash_table_t *new_tab = malloc(sizeof(shash_table_t));

	if (new_tab == NULL)
		return (NULL);
	new_tab->size = size;
	new_tab->array = malloc(sizeof(shash_node_t *) * size);
	if (new_tab->array == NULL)
		return (NULL);
	for (; x < size; x++)
	       new_tab->array[x] = NULL;
	new_tab->shead = NULL;
	new_tab->stail = NULL;
	return (new_tab);
}

/**
 * shash_table_set - ThE function adds an element to the sorted Hash Table
 * @ht: ThE pointer to the sorted Hash Table
 * @key: ThE key to add
 * @value: ThE value associated to the given key
 * Return: 1 (success) or 0 (failure)
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *cpy_value;
	shash_node_t *new_node, *var;
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
	new_node = malloc(sizeof(shash_node_t));
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

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		var = ht->shead;
		while (var->snext != NULL && strcmp(var->snext->key, key) < 0)
			var = var->snext;
		new_node->sprev = var;
		new_node->snext = var->snext;
		if (var->snext == NULL)
			ht->stail = new_node;
		else
			var->snext->sprev = new_node;
		var->snext = new_node;
	}
	return (1);
}

/**
 * shash_table_get - ThE function retrieves a value associated with a key.
 * @ht: ThE hash table to look into
 * @key: ThE key
 * Return: The associated value with the element (success) or NULL (failure)
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *Node;

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

/**
 * shash_table_print - ThE function prints a Hash Table
 * @ht: ThE pointer to the hash Table to print
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *Temp;
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

/**
 * shash_table_print_rev - ThE function prints a Hash Table
 * @ht: ThE pointer to the hash Table to print
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *Temp;
	unsigned int index = 0, firstPair = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (; index < ht->size; index++)
	{
		for (Temp = ht->array[index]; Temp != NULL; Temp = Temp->sprev)
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

/**
 * shash_table_delete - ThE function deletes a hash Table
 * @ht: ThE pointer to a hash table
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *Node, *Temp;
	shash_table_t *ptr = ht;
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
