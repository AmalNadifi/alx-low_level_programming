#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - the function prints anything entered by the user
 * @format: types of arguments entered by the user ( ranging from
 * char, integer, float..)
 * @...: the arguments passed to our function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *elem, *separator = "";
	va_list l;

	va_start(l, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(l, double));
					break;
				case 's':
					elem = va_arg(l, char *);
					if (!elem)
						elem = "(nil)";
					printf("%s%s", separator, elem);
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(l);
}


