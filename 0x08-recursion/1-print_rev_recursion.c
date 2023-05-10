#include "main.h"

/**
 * _print_rev_recursion - the function prints a string in reverse
 * @s: the string to be printed in reverse
 * Return: void ( no return value)
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
