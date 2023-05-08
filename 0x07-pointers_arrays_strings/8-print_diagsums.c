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
	int x;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
			sum1 = sum1 + a[x];
			sum2 = sum2 + a[size - x -1];
			a = a + size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

