#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - Write a function that allocates memory using malloc.
 *@b: pointeur vers malloc_checked
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
void *malloc_checked(unsigned int b)
{
	int *arr = malloc(b);

	if (!arr)
		exit(98);

	return (arr);
}
