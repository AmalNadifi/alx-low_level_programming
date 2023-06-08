#include "main.h"

/**
 * get_endianness - the function retunrs the endianness of the system
 * Return: 0 (big endian) or 1 (small)
 */

int get_endianness(void)
{
	unsigned long int a = 1;

	return(*(char *)&a);
}
