#include "main.h"

/**
 * clear_bit - the function sets the bit value to 0 at the given index
 * @n: the pointer to the integer
 * @index: the chosen index
 * Return: 1 (success) or -1 (failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
