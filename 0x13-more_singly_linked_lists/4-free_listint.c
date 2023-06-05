#include "lists.h"

/**
 * free_listint - the function frees our linked list listint_t
 * @head: pointer to our head node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *my_tmp;

	while (head != NULL)
	{
		my_tmp = head;
		head = head->next;
		free(my_tmp);
	}
}
