#include "main.h"

/**
 * binary_to_uint - the function converts the entered binary number
 * to an unsigned integer
 * @b: the pointer to the string of 0 and 1 chars
 * Return: the resultant converted number (success)
 * or return  0 (if one or more chars in b are not 0 or 1 or if b is NULL)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a; /* the converted number*/
	unsigned int counter;

	for (a = 0, counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] == '1')
		{
			a = (a << 1) | 1;
		}
		else if (b[counter] == '0')
		{
			a = a << 1;
		}
		else if (b[counter] != '0' && b[counter] != '1')
		{
			return (0);
		}
	}
	return (a);
}
