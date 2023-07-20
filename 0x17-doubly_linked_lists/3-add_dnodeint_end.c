#include "lists.h"

/**
 * add_dnodeint_end - the function adds a new node to the end
 * of a dlistint_t list
 * @head: the double pointer to the list head
 * @n: the number to add
 * Return: the address of the new element (success),
 * or NULL (failure)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_nodee == null)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	new_node->prev = last_node;
	last_node->next = new_node;
	return (new_node);
}
