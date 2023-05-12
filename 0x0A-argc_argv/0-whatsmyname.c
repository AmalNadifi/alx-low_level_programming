#include <stdio.h>

/**
 * main - the program prints the name of the program
 * followed by a new line
 * @argc: the argument counter as an integer
 * @argv: the argument vector , list
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
