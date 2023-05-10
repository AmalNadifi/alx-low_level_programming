#include "main.h"

/**
 * _strlen_recursion - the function returns the length of the string entered
 * @s: our string as input
 * Return:  integer ( the string length value )
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
		len = len + _strlen_recursion(s + 1) + 1;
	return (len);
}
