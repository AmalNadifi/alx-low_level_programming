#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - the function returns a pointer to a two dimensional
 * array of integers
 * each element of the grid should be initislized to zero
 * @width: width of our array as integer
 * @height: height of our array as integer
 * Return: the resultant grid , else returns 0 ( on failure)
 */

int **alloc_grid(int width, int height)
{
	int **T, a, b;

	T = malloc(sizeof(*T) * height);

	if (width <= 0 || height <= 0 || T == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < height; a++)
		{
			T[a] = malloc(sizeof(**T) * width);
			if (T[a] == NULL)
			{
				while (a--)
					free(T[a]);
				free(T);
				return (NULL);
			}
			for (b = 0; b < width; b++)
			{
				T[a][b] = 0;
			}
		}
	}
	return (T);
}
