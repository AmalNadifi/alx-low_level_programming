#include "lists.h"

/**
 * dlistint_len - the function calculates the number of elements
 * in a linked dlistint_t list
 * @h: the list head pointer
 * Return: how many elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
