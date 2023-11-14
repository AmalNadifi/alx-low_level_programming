#include "search_algos.h"

/**
 * helper_binary_search - This function searches for a value in a sorted array
 * of integers using binary search
 * @array: The pointer to the 1st element of the array to search
 * @L: The starting index of the sub-array to search
 * @R: The ending index of the sub-array to search
 * @value: The value to search for
 * Return: -1 (value is not present or the array is NULL)
 * or the index where the value is located ( success)
 */
int helper_binary_search(int *array, size_t L, size_t R, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	while (R >= L)
	{
		printf("Searching in array: ");
		for (x = L; x < R; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);
		x = L + (R - L) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			R = x - 1;
		else
			L = x + 1;
	}
	return (-1);
}

/**
 * exponential_search - The function searches for a value in a sorted array
 * of integers using exponential search
 * @array: The pointer to the 1st element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index where value is located (success)
 * or -1 (value is not present or array is empty)
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, R;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (a = 1; a < size && array[a] <= value; a = a * 2)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	R = a < size ? a : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", a / 2, R);
	return (helper_binary_search(array, a / 2, R, value));
}
