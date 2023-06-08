#include "main.h"

/**
 * get_bit - the function returns the bit value at a chosen index
 * @n: the number
 * @index: the ondex chosen by the user
 * Return: bit value at index or -1 (failure)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
