#include "lists.h"

/**
 * reverse_listint - the function reverses the linked list listint_t
 * @head: the double pointer to the head node
 * Return: pointer to the head node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *var1, *var2;

	var1 = *head;
	*head = NULL;

	for (; var1 != NULL; )
	{
		var2 = var1->next;
		var1->next = *head;
		*head = var1;
		var1 = var2;
	}
	return (*head);
}
