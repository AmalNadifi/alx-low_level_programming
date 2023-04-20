#include <stdio.h>
/**
 * main - The program prints the size of various types on the computer it is compiled and run on
 * Return: 0 (success)
 */
int main(void)
{
printf("\"Size of a char: %d byte(s)", sizeof(char));
printf("\"Size of an int: %d byte(s)", sizeof(int));
printf("\"Size of a long int: %d byte(s)", sizeof(long int));
printf("\"Size of a long long int: %d byte(s)", sizeof(long long int));
printf("\"Size of a float: %d byte(s)", sizeof(float));
return (0);
}
