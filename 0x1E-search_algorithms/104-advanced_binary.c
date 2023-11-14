#include "search_algos.h"
/**
 * rec_advanced_binary - The function searches for a value in a sorted array
 * of integers using recursion and binary search
 * @array: The pointer to the 1st element of the array to search
 * @L: The starting index of the sub-array to search
 * @R: The ending index of the sub-array to search
 * @value: The value to search for
 * Return: -1 (value is not present or the array is NULL)
 * or the index where the value is located ( success)
 */
int rec_advanced_binary(int *array, size_t L, size_t R, int value)
{
	size_t x;

	if (R < L)
		return (-1);

	printf("Searching in array: ");
	for (x = L; x < R; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	x = L + (R - L) / 2;
	if (array[x] == value && (x == L || array[x - 1] != value))
		return (x);
	if (array[x] >= value)
		return (rec_advanced_binary(array, L, x, value));
	return (rec_advanced_binary(array, x + 1, R, value));
}



/**
 * advanced_binary - The function searches for a value in a sorted array
 * of integers using advanced binary search
 * @array: The pointer to the 1st element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index where value is located (success)
 * or -1 (value is not present or array is empty)
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (rec_advanced_binary(array, 0, size - 1, value));
}
