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
	int test;

	for (test = 0; test <= 9; test++)
	{

		putchar(test + '0');
		if (test < 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
