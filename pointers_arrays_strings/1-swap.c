#include "main.h"

/**
 *swap_int - Write a function that swaps the values of two integers.
 *@a: is a value
 *@b: is an other
 *
 *Description: le langage C est linéaire donc chaques lignes sont
 lus les unes à la suite des autres.
 invers prend la valeur de a
 puis a la valeur de b
 et enfin b la valeur d'invers(soit a)
 *
 *Return: Success
 */
void swap_int(int *a, int *b)
{
	int invers;

	invers = *a;
	*a = *b;
	*b = invers;
}
