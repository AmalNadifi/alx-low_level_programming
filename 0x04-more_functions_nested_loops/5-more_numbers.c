#include "main.h"
/**
 * more_numbers - The program prints 10 times the numbers,
 * from 0 to 14
 * followed by a new line
 * Return: numbers from 0 to 14 ,printed 10 times
 */

void more_numbers(void)
{
	int i, x;

	for (x = 1; x <= 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar (i % 10 + '0');
		}
		_putchar('\n');
	}
}
