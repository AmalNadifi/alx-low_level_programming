#include <stdio.h>
/**
 * main - The program prints the alphabet in lowercase in reverse
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
