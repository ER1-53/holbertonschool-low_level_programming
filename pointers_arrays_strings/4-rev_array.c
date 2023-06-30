#include "main.h"

/**
 *reverse_array - return
 *@a: is come back
 *@n: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
