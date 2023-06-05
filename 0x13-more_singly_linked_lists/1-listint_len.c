#include "lists.h"

/**
 * listint_len - the function returns the number of elements
 * in a linked list
 * @h: pointer ti our head node
 * Return: Num of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
