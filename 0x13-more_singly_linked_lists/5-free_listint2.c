#include "lists.h"

/**
 * free_listint2 - the funtion frees the linked list listint_t
 * @head: double pointer to the head node of ourlinked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *my_tmp2;

	while (*head != NULL)
	{
		my_tmp2 = *head;
		*head = (*head)->next;
		free(my_tmp2);
	}
	*head = NULL;
}
