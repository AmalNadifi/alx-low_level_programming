#include "lists.h"

/**
 * add_nodeint - the function a new node at the beginning of our listint_t
 * @head: the double pointer to our head node
 * @n: value of the new node to add
 * Return: address of the new element (success) NULL (failure)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (head == NULL || new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->n = n;
	if (*head != NULL)
	{
		new->next = *head;
	}
	*head = new;
	return (new);
}
