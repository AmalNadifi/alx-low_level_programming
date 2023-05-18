#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - the function allocates memory using malloc
 * @b: the size of memory to allocate by malloc
 * Return: t-he pointer to the allocated memoryy by malloc function
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
