#include "main.h"

/**
 * print_array - the function prints n elements of an array
 * @a: the array
 * @n: the number of elements to be printed
 * Return: a nd n
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
				}
				if (x == (n - 1))
				{
				printf("%d", a[n - 1]);
						}
						printf("\n");
						}
