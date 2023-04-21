#include <stdio.h>
/**
 * main - The program prints the alphabet in lowercase, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
char letter;
for (int letter = 'a'; letter <= 'z'; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}

