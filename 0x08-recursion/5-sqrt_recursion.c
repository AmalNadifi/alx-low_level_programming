#include "main.h"

/**
 * _sqrt_recursion - the function returns the natural square root of a number
 * @n: the integer to calculate its square root
 * Return: the result as an integer
 */

int square_checker(int n, int sqr);
int _sqrt_recursion(int n)
{
	return (sqrt_checker(n, 1));
}

/**
 * square_checker - check if the square root is natural
 * @n: the integer to calculate its square root
 * @sqr: the square of our integer n
 * Return: the result as an integer
 */

int square_checker(int n, int sqr)
{
	if (sqr * sqr == n)
		return (sqr);
	else if (sqr * sqr < n)
		return (square_checker(n, sqr + 1));
	else
		return (-1);
}
