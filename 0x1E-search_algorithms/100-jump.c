#include "search_algos.h"

/**
 * jump_search - The function searches for a value in a sorted array
 * of integers using the JUMP SEARCH ALGORITHM
 * @array: The pointer to the 1st element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The 1st index where value is located (success)
 * or -1 (value is not present or array is empty)
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size), prev, x;

	if (array == NULL || size == 0)
		return (-1);

	for (x = prev = 0; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		x = prev;
		prev += jump_step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", x, prev);

	prev = prev < size - 1 ? prev : size - 1;
	for (; x < prev && array[x] < value; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return ((array[x] == value) ? (int)x : -1);
}
