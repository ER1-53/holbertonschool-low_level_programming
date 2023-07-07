
#include "main.h"

/**
 *puts_half - Write a function that prints
 *half of a string, followed by a new line.
 *@str: is come back
 *
 *Description: Il faut imprimer les derniers caractères à partir
 *de la moitier supérieur de la string.
 *On commence par recupérer la string dans 'len'
 *On selectionne la moitier du string à la valeur suppérieur et l'envoie
 dans la variable 'i' puis l'affiche avec putchar.
 *
 *
 *Return: Success
 */
void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len] != '\0'; len++)

	for (i = (len + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
