#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 *print_numbers - display numbers
 *@separator: separate before the end
 *@n: number of int
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;


	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));

		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}

	va_end(print);

	putchar('\n');


}

