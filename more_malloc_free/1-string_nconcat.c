#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Write a function that returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string given as a parameter.
 *@str: is come back
 *
 *Description: il faut connaitre le nombre de caractère à copier
 *on vérifie si str n'est pas vide sinon return NULL
 *grace on nombre de caratère on connait l'espace qu'il faut allouer dans
 *malloc pour copier le même mot.
 *la 1ere boucle permet de comptabiliser le nombre de caractère
 *dans le mot
 *dans pt_memory on multiplit la valeur par 'i' + 1 (sans la valeur NULL)
 *Puis avec la 2nd boucle on copie la string de str[i] dans pt_memory[i].
 *
 *Return: Success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *arr;

	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	arr = malloc((i + n + 1) * sizeof(char));

	if (arr == NULL)
		return NULL;

	for (unsigned int k = 0; k < i; k++)
		arr[k] = s1[k];

	for (unsigned int k = 0; k < n && s2[k] != '\0'; k++)
		arr[i + k] = s2[k];

	arr[i + n] = '\0';

	return arr;
}







