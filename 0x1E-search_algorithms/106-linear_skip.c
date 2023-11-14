#include "search_algos.h"
/**
 * linear_skip - The function searches for a value
 * in a sorted skip list of integers
 * @list: the pointer to the head of the skip list to search in
 * @value: the value to sarch for
 * Return:  pointer to the first node where value is located (success)
 * or NULL (value is not present in head or if head is NULL)
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *next_jump;

	if (list == NULL)
		return (NULL);
	for (current = next_jump = list; next_jump->next != NULL &&
	     next_jump->n < value;)
	{
		/* Move to the next jump node */
		current = next_jump;

		/* If express node is not NULL, jump to it */
		if (next_jump->express != NULL)
		{
			next_jump = next_jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					next_jump->index, next_jump->n);
		}
		else
		{
			/* If express node is NULL, traverse the list */
			while (next_jump->next != NULL)
				next_jump = next_jump->next;
		}
	}
	/* Print the range where the value is found */
	printf("Value found between indexes [%ld] and [%ld]\n",
			current->index, next_jump->index);

	/* Traverse the sublist to find the exact node */
	for (; current->index < next_jump->index && current->n < value;
			current = current->next)
		printf("Value checked at index [%ld] = [%d]\n",
				current->index, current->n);

	/* Print the last checked node in the sublist */
	printf("Value checked at index [%ld] = [%d]\n",
			current->index, current->n);

	return (current->n == value ? current : NULL);
}
