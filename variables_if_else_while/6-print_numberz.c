#include <stdio.h>
/**
 *main - retry point
 *
 *Description: count to 9 without printf
 *
 *Return: wall
 */

int main(void)
{
	int x = 0;

	do {
		putchar(x + '0');
		x += 1;
	} while (x < 10);

	putchar('\n');
	return (0);
}
