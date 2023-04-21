#include <stdio.h>
/**
 * main - The program prints all single numbers of base 10
 * starting from 0, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
int x;

for (x = 0 ; x < 10 ; x++)
{
	printf("%d", x);
}
printf("\n");
return (0);
}
