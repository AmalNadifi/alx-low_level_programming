#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program multiplies two numbers
 * the program should print the result of the multiplication
 * followed by a new line
 * the two numbers and result of multiplication can be stored as integer
 * @argc: the argument counter as an integer
 * @argv: the argument vector, list
 * if the program does not receive two arguments, it should print error
 * followed by a new line , and return 1
 * Return: 0 ( success)
 */

int main(int argc, char **argv)
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
		printf("Error\n");
	return (1);

	return (0);
}

