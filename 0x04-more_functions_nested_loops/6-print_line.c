#include "main.h"
/**
 * print_line - The program draws a straight line in the terminal
 * @n: to check how many _ to print
 * Return: no return value
 */

void print_line(int n)
{
if (n <= 0)
{
	_putchar('\n');
}
else
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
}
