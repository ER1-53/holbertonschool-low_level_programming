#include "main.h"

/**
 *print_line - return
 *@n: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void print_line(int n)
{
	int u;

	if (n >= 0)
	{
		for (u = 0; u <= n; u++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
