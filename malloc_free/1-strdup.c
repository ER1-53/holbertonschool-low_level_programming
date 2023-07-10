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
char *_strdup(char *str)
{
	int i;
	char *pt_memory;

	if (str == NULL)
	{
	return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	pt_memory = malloc(sizeof(char) * (i + 1));

	if (pt_memory == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		pt_memory[i] = str[i];
	}
	pt_memory[i] = '\0';
	return (pt_memory);
}
