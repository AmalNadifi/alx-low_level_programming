#include <stdlib.h>
#include <stdio.h>

/**
 * main - the program prints the opcodes
 * @argv: the vextor of arguments
 * @argc: the counter of arguments
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int num_b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_b = atoi(argv[1]);
	if (num_b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	do {
		printf("%02hhx%s", *ptr++, num_b ? " " : "\n");
	} while (num_b--);
	return (0);
}
