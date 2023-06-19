#include <stdio.h>
/**
 *main - retry life
 *
 *Description: hexadecimal
 *
 *Return: big life
 *
 */

int main(void)
{
	int letter;
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
