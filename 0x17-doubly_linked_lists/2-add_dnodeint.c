#include "lists.h"

/**
 * add_dnodeint - the function adds a new node at the beginning
 * of a dlistint_t list
 * @head: the double pointer to the list head
 * @n: the number to add
 * Return: the address of the new element (success),
 * or NULL (failure)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
