#include "main.h"

/**
 * reverse_array - the function reverses the content of an array of integers
 * @a: the array of integers
 * @n: the number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
