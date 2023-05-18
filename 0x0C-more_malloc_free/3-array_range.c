#include "main.h"
#include <stdlib.h>

/**
 * array_range - the function creates array of integers
 * @min: the min integer in the array
 * @max: the max integer in the array
 * Return: the array of integers ranged from min to max
 */

int *array_range(int min, int max)
{
	int size, x, *p;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (!p)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		p[x] = min++;
	}
	return (p);
}
