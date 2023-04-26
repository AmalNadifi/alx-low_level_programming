#include "main.h"

/**
 * positive_or_negative - a program that indicates if a number
 * is positive or negative
 * @i: the integer to check
 * Return: no return value
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
