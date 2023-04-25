#include "main.h"
/**
 * _islower - The program checks for lowercase character
 * followed by a new line
 * @c: The character to print
 * Return: 1 if character is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
