#include "main.h"

/**
 * set_bit - the function sets the value of a chosen bit to 1
 * at the given index
 * @n: the integer to replace the bit value
 * @index: the chosen index
 * Return: 1 (success) or -1 (failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	*n = (1 << index) | *n;
	return (1);
}
