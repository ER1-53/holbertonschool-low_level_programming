#include "main.h"

/**
 *print_diagonal - return
 *@n: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void print_diagonal(int n)
{
	if (n > 0)
	{

		int u;
		int v;

		for (u = 0; u < n ; u++)
		{
			for (v = 0; v < u ; v++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
