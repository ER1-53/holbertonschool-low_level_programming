#include <stdio.h>
/**
 *main - full time
 *
 *Description: What you want !
 *
 *Return: peggy
 *
 */

int main(void)
{
	int full = 0;

	do {
	putchar(full + '0');
	putchar(',');
	putchar(' ');
	full += 1;
	} while (full <= 9);

	putchar('\n');

		return (0);
}
