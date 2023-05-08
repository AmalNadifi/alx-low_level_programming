#include "main.h"

/**
 * set_string - the function sets the value of a pointer to a char
 * @s: the pointer to pointer
 * @to: a char pointer
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
