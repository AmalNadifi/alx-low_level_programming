#include "main.h"
/**
 * print_number - the program prints an integer
 * @n: integer to be printed
 * Return: no return value
 */

void print_number(int n)
{
	int x;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	else
	{
		x  = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
