#include "lists.h"

/**
 * print_dlistint - the function prints all the elements of a dlistint list
 * @h: the pointer to the list head
 * Return: how many nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
