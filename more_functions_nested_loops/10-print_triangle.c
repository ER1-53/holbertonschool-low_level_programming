#include "main.h"

/**
 *print_triangle - return
 *@size: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void print_triangle(int size)
{
	int y;
	int x;
	int z;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < (size - y); x++)
		{
			_putchar(' ');

		}
		for (z = 0; z < (size - x); z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
