#include "lists.h"

/**
 * list_len - the function calculates how many elements in
 * the linked list list_t
 * @h: pointer toour linked list
 * Return: the lenghth of the list
 */

size_t list_len(const list_t *h)
{
	size_t idx;

	for (idx = 0; h; idx++)
	{
		h = h->next;
	}
	return (idx);
}
