#include "lists.h"

/**
 * sum_dlistint - the function sums all the data of a dlistint_t list
 * @head: the pointer to the list head
 * Return: the resultant sum (success) or 0 (failure)
 */

int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			res = res + head->n;
			head = head->next;
		}
	}
	return (res);
}
