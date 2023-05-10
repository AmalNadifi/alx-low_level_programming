#include "main.h"

/**
 * factorial - the function returns the factorial of the given number
 * @n: the number as input
 * Return: the result as an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
