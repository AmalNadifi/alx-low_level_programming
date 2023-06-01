#include "lists.h"

/**
 * free_list - the function frees the list list_t
 * @head: the pointer to the list list_t
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *Node;
	list_t *n_node; /* next node */

	if (head == NULL)
	{
		return;
	}
	Node = head;
	while (Node != NULL)
	{
		n_node = Node->next;
		free(Node->str);
		free(Node);
		Node = n_node;
	}
}
