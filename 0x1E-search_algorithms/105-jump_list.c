#include "search_algos.h"
/**
 * jump_list - The function searches for a value in a sorted list
 * of integers using the Jump search algorithm
 * @list: the pointer to the head of the list to search in
 * @size: The number of nodes in list
 * @value: the value to search for
 * Return: pointer to the first node where value is located (success)
 * or NULL (value is not present in head or if head is NULL)
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current;
	size_t jump_step = sqrt(size), prev, x;

	if (list == NULL || size == 0)
		return (NULL);
	prev = 0;
	current = list;
	while (current && current->index < jump_step && current->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		prev = current->index;
		current = current->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);

	for (x = prev; x <= current->index && current->n < value; x++)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		current = current->next;
	}
	return ((current && current->n == value) ? current : NULL);
