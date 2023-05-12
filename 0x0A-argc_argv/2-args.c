#include <stdio.h>

/**
 * main - the program prints all the arguments received
 * all arguments should be printed , including the first one
 * only print one argument per line , ending with a new line
 * @argc: the argument counter as an integer
 * @argv: the argument vector, list
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
