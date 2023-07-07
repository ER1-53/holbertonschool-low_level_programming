#include "main.h"
#include <stdio.h>
/**
 *print_array - Write a function that prints n elements
 *of an array of integers, followed by a new line.
 *@a: is come back
 *@n: is come back
 *
 *Description: Le but est d'afficher un nombre d'élément 'n'
 *d'un tableau.
 *On créer une boucle dont la condition et d'obtenir les 'n' éléments
 *on affiche les valeur a[i] ou *a
 *Il est créer une condition qui permet de mettre
 *une vigule et un espace tant que i != n-1
 *pour que ces éléments ne s'affiche pas après le dernier
 *caractère.
 exemple:
 * si n = 3;
 *i = 0 donc i < 3
 *if i != 3-1  oui
 * on ajoute vigule et espace et i++
 * i = 1 donc i < 3
 *if i != 3-1  oui
 * on ajoute vigule et espace et i++
 * i = 2 donc i < 3
 *if i != 3-1  Non
 * on ajoute i++
 *le resulat '1, 2, 3'
 *Return: Success
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}


	printf("\n");
}
