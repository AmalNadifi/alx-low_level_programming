#include "lists.h"

/**
 * add_nodeint - the function a new node at the beginning of our listint_t
 * @head: the double pointer to our head node
 * @n: value of the new node to add
 * Return: address of the new element (success) NULL (failure)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (head == NULL || new_head == NULL)
	{
		return (NULL);
	}
	new_head->next = NULL;
	new_head->n = n;
	if (*head != NULL)
	{
		new_head->next = *head;
	}
	*head = new_head;
	return (new_head);
}
