#include "main.h"
#include <stdlib.h>

/**
 * free_grid - the fubction frees a two dimensional grid
 * previously created by our alloc_grid function
 * @grid: the two dimensional array as input
 * @height: the height of the array as integer
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
