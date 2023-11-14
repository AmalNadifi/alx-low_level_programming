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
	listint_t *current, *next_jump;
	size_t jump_step, prev;

	if (list == NULL || size == 0)
		return (NULL);
	prev = 0;
	jump_step = sqrt(size);

	for (current = next_jump = list; next_jump->index + 1 < size &&
	     next_jump->n < value;)
	{
		current = next_jump;
		for (prev += jump_step; next_jump->index < prev;
		     next_jump = next_jump->next)
		{
			if (next_jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n",
		       next_jump->index, next_jump->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       current->index, next_jump->index);

	for (; current->index < next_jump->index && current->n < value;
	     current = current->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);
	}
	printf("Value checked at index [%ld] = [%d]\n",
	       current->index, current->n);
	return (current->n == value ? current : NULL);
}
