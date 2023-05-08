#include "main.h"

/**
 * print_diagsums - the function prints the sum of two diagonals
 * of a square matrix of integers
 * @a: the square matrix
 * @size: the size of the square matrix a
 * Return: 0 ( success)
 */

void print_diagsums(int *a, int size)
{
	int x, y;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
		for (y = x; y < size; y++)
		{
			sum1 = sum1 + a[x][y];
		}
	}
	for (x = 0; x < size; x++)
	{
		for (y = size - 1; y > 0; y--)
		{
			sum2 = sum2 + a[x][y];
		}
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

