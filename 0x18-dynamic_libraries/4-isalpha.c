#include "main.h"
/**
 * _isalpha - The program checks for lowercase character
 * followed by a new line
 * @c: The character to print
 * Return: 1 if character is a letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
