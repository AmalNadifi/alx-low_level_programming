#include "lists.h"

/**
 * insert_nodeint_at_index - the function inserts
 * a new node at a given position
 * @head: double pointer to the head node
 * @idx: index where to add the new node in the linked list
 * @n: the integer to add
 * Return: address of the new node (success) or NULL (failure)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *var, *new_var;

	new_var = malloc(sizeof(listint_t));

	if (head == NULL || new_var == NULL)
	{
		return (NULL);
	}
	new_var->n = n;
	new_var->next = NULL;
	if (idx == 0)
	{
		new_var->next = *head;
		*head = new_var;
		return (new_var);
	}
	var = *head;
	for (; var != NULL; counter++)
	{
		if (counter == idx - 1)
		{
			new_var->next = var->next;
			var->next = new_var;
			return (new_var);
		}
		var = var->next;
	}
	free(new_var);
	return (NULL);
}
