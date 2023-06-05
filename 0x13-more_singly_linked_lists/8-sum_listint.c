#include "lists.h"

/**
 * sum_listint - the function calculates the sum of all the data
 * entered in the linked list listint_t
 * @head: pointer to the head node of our linked list listint_t
 * Return: the sum as integer (success) or 0 (if list is empty)
 */

int sum_listint(listint_t *head)
{
	int res; /* the variable used for sum */

	for (res = 0; head != NULL; head = head->next)
	{
		res = res + head->n;
	}
	return (res);
}
