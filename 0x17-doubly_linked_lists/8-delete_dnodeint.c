#include "lists.h"

/**
 * delete_dnodeint_at_index - the function deletes the node at the given index
 * @head: the double pointer to the list head
 * @index: ThE index of the node to delete
 * Return: 1 (success) or 0 (failure)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (; index > 0 && current != NULL; index--)
		current = current->next;
	if (current == NULL)
		return (-1);
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
