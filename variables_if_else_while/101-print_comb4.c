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
	int dozen, unit, hundred;

	/* je fais 10 * le 1er numero */
for (hundred = '0'; hundred <= '9'; hundred++)
{
	for (dozen = '0'; dozen <= '9'; dozen++)
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			if (dozen >= unit || hundred == dozen || dozen == unit || hundred == unit || hundred > dozen)
				continue;
			putchar(hundred);
			putchar(dozen);
			putchar(unit);
			if (hundred != '7')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
	putchar('\n');

	return (0);
}
