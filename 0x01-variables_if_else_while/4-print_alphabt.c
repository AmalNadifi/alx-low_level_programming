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
	if (letter != 'e' && letter != 'q')
	{
		putchar(letter);
	}
}

putchar('\n');
return (0);
}
