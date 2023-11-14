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
	size_t jump_step = sqrt(size), prev = 0, x;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[min(jump_step, size) - 1] < value)
	{
		prev = jump_step;
		jump_step += sqrt(size);
		if (prev >= size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump_step);
	for (x = prev; x < min(jump_step, size); x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}

/**
 * min - This function is returning the minimum of 2 values
 * @x : 1st value
 * @y: 2nd value
 * Return: the resultant minimum
 */
size_t min(size_t x, size_t y)
{
	return (x < y ? x : y);
}
