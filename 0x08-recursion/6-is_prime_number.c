#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - the function checks if an integer is prime number
 * @n: the integer as input
 * @a: integer
 * Return: 1 if the integer is a prime number , otherwise returns 0
 */

int prime_checker(int n, int a);
int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}

/**
 * prime_checker - the function checks if all the numbers (less than
 * our input integer n) can divide the integer n
 * @n: the integer as input
 * @a: integer
 * Return: integer value
 */

int prime_checker(int n, int a)
{
	if (a >= n && n >= 2)
		return (1);
	else if (n % a == 0 || n <= 1)
		return (0);
	else
		return (prime_checker(n, a + 1));
}
