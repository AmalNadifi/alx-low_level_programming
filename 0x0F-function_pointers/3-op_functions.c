#include "3-calc.h"

/**
 * op_add - the function adds two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - the function substracts two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the substraction of the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the function multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the multiplication of the two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the function mdivides two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result division of the two integers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the function gives the result of the modulo of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the division remainder of dividing the two integers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
