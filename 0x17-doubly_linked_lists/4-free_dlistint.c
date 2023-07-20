#include "lists.h"

/**
 * free_dlistint - the function frees a dlistint_t list
 * @head: pointer to the list head
 * Return: void
 */

void free_dlistint(dlistint_t *head);
{
	dlistint_t *var;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while ((var = head) != NULL)
	{
		headr =head->next;
		free(var);
	}
}
