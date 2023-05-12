#include "main.h"
/**
 * _abs - The program computes the absolute value of an integer
 * followed by a new line
 * @x: the number to check
 * Return: the absolute value of the integer
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
	_putchar('\n');
}
