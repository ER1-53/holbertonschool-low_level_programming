#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 *print_numbers - return
 *@n: information of the array
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
		if()
		printf("%s%s", va_arg(print, char), separator);
	}

	va_end(print);
	
	putchar('\n');
}
