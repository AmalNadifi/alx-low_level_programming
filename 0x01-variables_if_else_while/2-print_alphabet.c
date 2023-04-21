#include <stdio.h>
#include <ctype.h>
/**
 * main - The program prints the alphabet in lowercase, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
int x;
for (int x = 'A'; x <= 'Z'; x++)
{
	putchar(tolower(x));
}
putchar('\n');
return (0);
}

