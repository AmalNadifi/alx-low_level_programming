#include "lists.h"

/**
 * pop_listint - the function deletes the head node
 * of the linked list listint_t
 * @head: the double pointer to the head node of listint_t
 * Return: ThE head node data n (success) or 0 (if list is empty)
 */

int pop_listint(listint_t **head)
{
	listint_t *var;
	int a;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	var = (*head)->next;
	a = (*head)->n;
	free(*head);
	*head = var;
	return (a);
}
