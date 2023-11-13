#include "search_algos.h"

/**
 * binary_search - The function searches for a value in a sorted array
 * of integers using the BINARY SEARCH ALGORITHM
 * @array: The pointer to the 1st element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index where value is located (success)
 * or -1 (value is not present or array is empty)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx = 0, L = 0, R = size - 1, M;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		M = (L + R) / 2;
		printf("Searching in array: ");
		for (idx = L; idx <= R; idx++)
			printf("%i%s", array[idx], idx == R ? "\n" : ", ");

		if (array[M] < value)
			L = M + 1;
		else if (array[M] > value)
			R = M - 1;
		else
			return (M);
	}

	return (-1);
}
