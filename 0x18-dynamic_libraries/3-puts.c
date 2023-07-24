#include "main.h"

/**
 * _puts - the fucntion prints a string , followed by a new line , to stdout
 * @str: the string that will be printed
 * Return: no return value
 */

void _puts(char *str)
{
	for ( ; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
