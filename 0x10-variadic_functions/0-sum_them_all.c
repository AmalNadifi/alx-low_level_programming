#include "variadic_functions.h"

/**
 * sum_them_all - the function calculate the sum of all the variable arguments
 * @n: how many arguments as input to our function
 * @...: the numbers to sum ( as integers)
 * Return: the resultant addition of all the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int x = 0;
	int res = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(p, n);
	do {
		res = res + va_arg(p, int);
		x++;
	} while (x < n);
	va_end(p);
	return (res);
}
