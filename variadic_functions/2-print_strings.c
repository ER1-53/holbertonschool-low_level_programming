#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 *print_strings - return
 *@separator: separate before the end
 *@n: number of int
 *
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	char *arg_inc;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		arg_inc = va_arg(print, char*);

		if (arg_inc == NULL)
			printf("(nil)");
		else
			printf("%s", arg_inc);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(print);

	putchar('\n');
}
