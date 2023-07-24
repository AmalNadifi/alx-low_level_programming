#include "main.h"

/**
 * _atoi - the function converts a string given to a number integer
 * @s: the string entered as input to convert
 * Return: the resultant integer from the string
 */

int _atoi(char *s)
{
	int a = 0, pos_neg = 1;

	do {
		if (*s == '-')
		{
			pos_neg = pos_neg * (-1);
		}
		else if (*s >= 48 && *s <= 57)
		{
			a = (a * 10) + (*s - '0');
		}
		else if (a > 0)
		{
			break;
		}
	} while (*s++);
	return (a * pos_neg);
}
