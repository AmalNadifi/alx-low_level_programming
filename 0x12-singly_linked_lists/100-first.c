#include "lists.h"

void Startup_quote(void) __attribute__((constructor));

/**
 * Startup_quote - the quote to print before main function
 * Return: void
 */

void Startup_quote(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");

}
