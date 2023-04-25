#include "main.h"
/**
 * print_sign - The program prints the sign of a number
 * followed by a new line
 * @n: the number to check
 * Return: 1 and prints + if number is greater than 0
 * 0 and prints 0 if number is zero
 * -1 and prints - if number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
