#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - the function prints strings
 * followed by a new line
 * @separator: the string separating the string to be printed
 * @n: how many strings to print
 * @...: the strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list q;
	unsigned int x = 0;
	char *mem;

	va_start(q, n);
	for ( x = 0; x < n;  x++)
	{
		mem = va_arg(q, char *);
		if (mem == NULL)
			printf("(nil)");
		else
			printf("%s", mem);
		if (x != ( n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(q);
}




