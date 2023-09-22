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
	int num, i = 0;

	/* je fais 10 * le 1er numero */
	for (num = '0'; num <= '9'; num++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (num >= i)
				continue;
			putchar(num);
			putchar(i);
			if (num != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
