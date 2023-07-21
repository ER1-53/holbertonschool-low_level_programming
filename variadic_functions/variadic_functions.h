#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct op - Struct op
 *
 * @variable_type: le type de variable
 * @f: The function associated
 */
typedef struct variable_type
{
	char *variable_type;
	void (*f)(va_list arg);
} variable_type_t;


#endif /* VARIADIC_FUNCTIONS_H */
