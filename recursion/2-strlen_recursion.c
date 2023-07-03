#include "main.h"

/**
 *_strlen_recursion - Write a function that returns the length of a string.
 *@s: is come back
 *
 *Description: On cherche à compter le nombre de caractere dasn la string
 *On crée la variable i pour compter le nombre de tour de la fonction
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
