#include "main.h"

/**
 *print_rev - Write a function that prints a string,
 *in reverse, followed by a new line.
 *@s: est le pointeur de la variable de texte
 *
 *Description: la fonction est en 2 étape:
 * 1ere consiste à stocker la chaine de caractère dans s[i]
 * la 2nd à renvoyer les caractère du dernier au 1er.
 * Par example "ho"
 * 1ere étape*******
 * i = 0 s[i] = 'h' donc != NULL alors +1
 * i = 1 s[i] = 'o' donc != NULL alors +2
 * i = 2 s[i] = NULL donc = NULL fin de boucle
 * s[i] a stocker s[0] et s[1] soit "ho"
 * 2nd étape********
 * i = 2 soit s[i] = 'o'
 * nous alons creer un boucle qui inverse la string
 * avec comme condition de fin que i = 0 donc que
 * s[i] soit retourné au 1er caractère soit 'h'
 * s[i] = 'NULL' i = 2 donc i > 0 alors i-- -1
 * s[i] = 'O' i = 1 donc i > 0 alors i-- -2
 * s[i] = 'h' i = 0 donc n'est plus i > 0 fin de la boucle.
 *
 * On affiche dans putchar les lettres 'o' puis 'h'.
 * 
 *Return: Success
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);

	}
	_putchar('\n');
}
