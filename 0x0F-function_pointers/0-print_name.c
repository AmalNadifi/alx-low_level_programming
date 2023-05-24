#include "function_pointers.h"

/**
 * print_name - the function prints a name
 * @name: the name to be printed as a string
 * @f: the pointer to the printing function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
