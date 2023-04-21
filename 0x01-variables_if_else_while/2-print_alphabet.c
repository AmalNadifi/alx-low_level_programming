#include <stdio.h>
#include <ctype.h>
/**
 * main - The program prints the alphabet in lowercase, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
char letter;
for (int letter = 'A'; letter <= 'Z'; letter++)
{
	putchar(tolower(letter));
}
putchar('\n');
return (0);
}

