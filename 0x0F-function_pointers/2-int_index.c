#include "function_pointers.h"

/**
 * int_index - the function searches for an integer
 * @array: the entered array
 * @size: how many elements are in the array
 * @cmp: pointer to the comparing function
 * Return: the index of the integer searched for
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && size && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}
	}
	else
		return (-1);
}
