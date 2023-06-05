#include "lists.h"

/**
 * delete_nodeint_at_index - the function deletes the node at the given index
 * @head: pointerto the head node
 * @index: the index of the node to delete
 * Return: 1 (succeeded) or -1 (failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tmp, *p_node; /*p_node is used for the previous node
				   in the linked list*/

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	for (; tmp != NULL; x++)
	{
		if (x == index)
		{
			p_node->next = tmp->next;
			free(tmp);
			return (1);
		}
		p_node = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
