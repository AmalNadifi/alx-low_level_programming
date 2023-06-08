#include "main.h"

/**
 * flip_bits - the function returns how many bits needed to flip
 * to get from one num to another one
 * @n: the first num
 * @m: the second num
 * Return: number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int idx = 0, counter = 0;

	while (idx <= sizeof(n) * 8)
	{
		if ((n & 1) != (m & 1))
		{
			counter++;
		}
		n = n >> 1;
		m = m >> 1;
		idx++;
	}
	return (counter);
}
