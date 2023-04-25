#include "main.h"
/**
 * print_last_digit - The program prints the last digit of a number
 * followed by a new line
 * @x: the integer
 * Return: last digit
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;

	if (y < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}
	_putchar('\n');
}
