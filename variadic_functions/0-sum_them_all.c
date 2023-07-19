#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 *sum_them_all - return
 *@n: information of the array
 *
 *
 *Description: it want eat me
 *
 *Return: Success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int i, sum;

	if (n == 0)
	return (0);

	va_start(param, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(param, unsigned int);

	va_end(param);

	return (sum);
}
