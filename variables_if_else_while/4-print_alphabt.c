#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: display alphabet without qe
 *
 *Return: Success
 */

int main(void)
{
	int t;

	for (t = 'a'; t <= 'z'; t++)
	{
		if (t == 'e' || t == 'q')
		{
			continue;
		}
		putchar(t);
	}
	putchar('\n');
	return (0);
}
