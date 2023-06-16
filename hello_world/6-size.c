#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", (int)sizeof(char));
	printf("size of an int: %d byte(s)\n", (int)sizeof(int));
	printf("size of a long int: %d byte(s)\n", (int)sizeof(long int));
	printf("size of long long int: %d byte(s)\n", (int)sizeof(long long int));
	printf("size of float: %d byte(s)\n", (int)sizeof(float));
	return (0);
}
