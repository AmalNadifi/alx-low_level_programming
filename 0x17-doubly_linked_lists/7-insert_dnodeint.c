#include "lists.h"

/**
 * insert_dnodeint_at_index - the function inserts a new
 * node at the givenposition
 * @h: the double pointer ti the list header
 * @idx: the index where to add the new node
 * @n: ThE value to add in the new node
 * Return: address of the new node (success) or NULL (failure)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int itr = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0 || *h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (; itr < idx - 1 && current != NULL; itr++)
		current = current->next;
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
