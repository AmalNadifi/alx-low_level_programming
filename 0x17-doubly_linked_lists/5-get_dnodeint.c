#include "lists.h"

/**
 * get_dnodeint_at_index - the function gets the nth node of
 * the given linked list
 * @head: the pointer to the list head
 * @index: the node index starting from zero
 * Return: the nth node (success) or NULL (node does not exit )
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		if (x == index)
			break;
		head = head->next;
		x++;
	}
	return (head);
}
