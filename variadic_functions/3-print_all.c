#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"



/**
 * print_funct_string - Fonction pour imprimer une chaîne de caractères.
 * @arg: L'argument de type chaîne de caractères à imprimer.
 */
void print_funct_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
	printf("(nil)");
	return;
	}

	printf("%s", str);
}

/**
 * print_funct_float - Fonction pour imprimer une chaîne de caractères.
 * @arg: L'argument de type chaîne de caractères à imprimer.
 */
void print_funct_float(va_list arg)
{
	double decimal = va_arg(arg, double);

	printf("%f", decimal);
}

/**
 * print_funct_char - Fonction pour imprimer un caractère.
 * @arg: L'argument de type caractère à imprimer.
 */
void print_funct_char(va_list arg)
{
	int c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_funct_int - Fonction pour imprimer un entier.
 * @arg: L'argument de type entier à imprimer.
 */
void print_funct_int(va_list arg)
{
	int num = va_arg(arg, int);

	printf("%d", num);
}



/**
 *print_all - return
 *@format: information of the array
 *
 *
 *Description: it want eat me
 *
 *Return: Success
 */

void print_all(const char * const format, ...)
{

	va_list prints_type;
	int i;
	int j = 0;
	char *separator = "";


	variable_type_t variable_type[] = {
		{"s", print_funct_string},
		{"c", print_funct_char},
		{"i", print_funct_int},
		{"f", print_funct_float}
	};


	va_start(prints_type, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;

		while (i < 4)
		{
			if (format[j] == *(variable_type[i].variable_type))
			{
				printf("%s", separator);
				variable_type[i].f(prints_type);
				separator = ", ";
			}
			i++;
		}
		j++;
	}

	va_end(prints_type);
	printf("\n");

}
