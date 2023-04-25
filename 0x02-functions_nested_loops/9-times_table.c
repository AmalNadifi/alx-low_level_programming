#include "main.h"
/**
 * times_table  - The program prints the 9 times table
 * starting with 0
 * Return: no return value
 */

void times_table(void)
{
	int x, y;
	int z;

	for (x  = 0; x < 10; x++)
	{
	for (y = 0; y < 10; y++)
	{
		z = x * y;
		_putchar(z);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	}
}
