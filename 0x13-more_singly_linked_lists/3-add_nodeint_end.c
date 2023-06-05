#include "lists.h"

/**
 * add_nodeint_end - the function adds a NEW node
 * at the end of our linked list listint_t
 * @head: double pointer to the head node
 * @n: the new integer to addat the end of listint_t
 * Return: address to the new added element (success) or NULL (failure)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *tmp;

	new_end = malloc(sizeof(listint_t));
	if (head == NULL || new_end == NULL)
	{
		return (NULL);
	}
	new_end->next = NULL;
	new_end->n = n;
	if (*head == NULL)
	{
		*head = new_end;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_end;
	}
	return (new_end);
}
