#include "main.h"

/**
 *_strlen - Write a function that returns the length of a string.
 *@s: valeur de s pointeur
 *
 *Description: Pour compter le nombre de lettre
 *dans la chaine de caractere la boucle verifie qu'a chaque
 *index (i) la valeur de s[i] est diffèrente de NULL
 *car NULL est la dernière valeur de toutes les string
 *par exemple pour le string "ho"
 *s[0] = "h" donc pas NULL alors +1
 *s[1] = "o" donc pas NULL alors +2
 *s[2] = NULL on ne rentre plus dans la boucle
 *et retourne i soit 2. Qui est = à 2 caractères.
 *
 *Return: Success
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
