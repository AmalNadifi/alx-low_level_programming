#include "main.h"

/**
 * _pow_recursion - the function returnrs the value of x
 * raised to the power of y
 * @x: our integer
 * @y: the power value
 * Return: the result as an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (x);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
