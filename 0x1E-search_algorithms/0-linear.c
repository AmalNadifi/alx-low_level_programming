#include "search_algos.h"

/**
 * linear_search - The function searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * @array: The pointer to the 1st element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The 1st index where value is located (success)
 * or -1 (value is not present or array is empty)
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);
	for (; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (-1);
}
