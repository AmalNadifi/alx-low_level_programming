#include "main.h"
/**
 * print_most_numbers - The program prints the numbers from 0 to 9
 * except 2 and 4
 * followed by a new line
 * Return: numbers from 0 to 9
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (!(i == 50 || i == 52))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
