#include "main.h"
/**
 * _isupper - The program checks for lowercase character
 * followed by a new line
 * @c: The character to print
 * Return: 1 if character is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
