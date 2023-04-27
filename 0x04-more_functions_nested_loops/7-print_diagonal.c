#include "main.h"
/**
 * print_diagonal - The program draws a diagonal line in the terminal
 * @n: to check how many \ to print
 * Return: no return value
 */

void print_diagonal(int n)
{
if (n <= 0)
{
	_putchar('\n');
}
else
{
	int x, y;

	for (x = 1; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (y == x)
				_putchar('\\');
			else if (y < x)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
}
