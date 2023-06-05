#include "lists.h"

/**
 * print_listint - the function prints the elements of the list listint_t
 * @h: ThE pointer to the head node
 * Return: how many nodes in our list
 */

size_t print_listint(const listint_t *h)
{
	size_t o;

	for (o = 0; h != NULL; o++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (1);
}
