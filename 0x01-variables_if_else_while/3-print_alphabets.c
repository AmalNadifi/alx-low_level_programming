#include <stdio.h>
/**
 * main - The program prints the alphabet in lowercase, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
	putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
