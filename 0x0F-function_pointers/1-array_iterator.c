#include "function_pointers.h"

/**
 * array_iterator - the function exexutes a function given as parameter
 * on each and every element of an array entered
 * @size: size of the array as input
 * @action: the pointer to the needed function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x = 0;

	if (array && size && action)
	{
		do {
			action(array[x]);
			x++;
		} while (x < size);
	}
}
