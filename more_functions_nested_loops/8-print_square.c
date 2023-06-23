#include "main.h"

/**
 *print_square - return
 *@size: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void print_square(int size)
{
	int n;
	int v;

	for (n = 0; n < size; n++)
	{
		for (v = 0 ; v < size ; v++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
