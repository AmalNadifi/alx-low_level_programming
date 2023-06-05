#include "lists.h"

/**
 * get_nodeint_at_index - the function gets the nth node
 * of linked list listint_t
 * @head: pointer to the head node
 * @index: index of the nth npde
 * Return: nth node (success) or 0 (failure)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *my_tmp = head;

	for (; x < index && my_tmp != NULL; x++)
	{
		my_tmp = my_tmp->next;
	}

	if (my_tmp != NULL)
		return (my_tmp);
	else
		return (NULL);
}
