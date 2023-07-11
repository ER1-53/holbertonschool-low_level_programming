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
	int i, j;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0'; i++)
		i++;
	for (j = 0 ; s2[j] != '\0' ; j++)
		j++;

	arr = malloc((i + j + 1) * sizeof(n));

	if (arr == 0)
		return (NULL);
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		arr[i] = s2[j];
		i++;
		j++;
	}

	arr[i] = '\0';
	return (arr);
 }
