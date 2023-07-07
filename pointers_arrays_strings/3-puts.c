#include "main.h"

/**
 *_puts - Write a function that prints a string,
 *followed by a new line, to stdout.
 *@str: for string
 *
 *Description: A chaque tour de la boucle while
 *nous allons prendre la valeur de *str (et la même chose que
 *str[i] avec incrementation de i++ et non plus de str)
 *soit les caractères de la string.
 *chacun leurs tours et l'afficher à laide de putchar
 *Par exemple 'ho':
 * 'str = 0'  *str = "h" donc diffèrent de NULL alors str + 1
 * 'str = 1'  *str = "o" donc diffèrent de NULL alors str + 2
 * 'str = 2'  *str = "NULL" donc = à NULL alors sortie de boucle
 *
 *
 */
void _puts(char *str)
{

	while (*str != '\0') // peut etre simplifié en (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
