#include <stdio.h>
/**
 *main - retry point
 *
 *Description: number suite
 *
 *Return: Success
 */

int main(void)
{
	int number = 0;

	do {
		printf("%d", number);
		number += 1;
	} while (number < 10);

	putchar('\n');
	return (0);
}
