#include "main.h"

/**
 *_strlen_recursion - Write a function that returns the length of a string.
 *@s: is come back
 *
 *Description: On cherche à compter le nombre de caractere dasn la string
 *On crée la variable i qui permettra de compter le nombre de tour à la fin
 *de la recurtion.
 *'i' prend comme variable la fonction _strlen_recursion
 *les carateres vont s'empiler sur la pile (stack)
 *la fonction va etre appelé jusqu'au caractere NULL
 *elle return chaque caractère de la pile grace au return
 *et incrementera i++ pour chaque caractère
 *puis retournera i soit le i++ * caractere de la pile.
 *
 *
 *Return: Success
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);

	}
	i = _strlen_recursion(s + 1);
	i++;
	return (i);

}
