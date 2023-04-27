#include "main.h"
/**
 * print_square - The program prints a square
 * followed by a new line
 * @n: to check the size of the square to print
 * Return: no return value
 */

void print_square(int n)
{
if (n <= 0)
{
	_putchar('\n');
}
else
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
}
