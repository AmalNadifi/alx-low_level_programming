#include "main.h"
/**
 * print_triangle - The program prints a triangle
 * followed by a new line
 * @n: to check the size of the triangle to print
 * Return: no return value
 */

void print_triangle(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x <= n; x++)
		{
			for (y = x; y < n; y++)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
