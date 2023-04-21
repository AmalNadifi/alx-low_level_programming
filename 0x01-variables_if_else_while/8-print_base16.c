#include <stdio.h>
/**
 * main - The program prints all single digit numbers of base 16
 * starting from 0, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
int x;
char letter;

for (x = 48 ; x < 58 ; x++)
{
	putchar(x);
}
for (letter = 'a' ; letter  <= 'f' ; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
