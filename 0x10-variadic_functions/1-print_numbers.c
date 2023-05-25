#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - the function prints numbers
 * followed by a new line
 * @separator: the string to print between the integers
 * @n: how many integers as input to our function
 * @...: the integers as input
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 0;
	va_list ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	do {
		printf("%d", va_arg(ptr, int));
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		a++;
	} while (a < n);
	printf("\n");
	va_end(ptr);
}
