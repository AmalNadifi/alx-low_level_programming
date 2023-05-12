#include <stdio.h>

/**
 * main - the program prints the number of arguments passed into it
 * followed byy a new line
 * @argc: the argument counter as an integer
 * @argv: the argument vestor, list
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
