#include "search_algos.h"

/**
 * interpolation_search - The function searches for a value in a sorted array
 * of integers using the INTERPOLATION SEARCH ALGORITHM
 * @array: The pointer to the 1st element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The 1st index where value is located (success)
 * or -1 (value is not present or array is empty)
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t x, L, R;

	if (array == NULL)
		return (-1);
	for (L = 0, R = size - 1; R >= L;)
	{
		x = L + (((double)(R - L) / (array[R] - array[L])) * (value - array[L]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			R = x - 1;
		else
			L = x + 1;
	}

	return (-1);
}
