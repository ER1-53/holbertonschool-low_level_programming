#include "main.h"

/**
 *rev_string - Write a function that reverses a string.
 *@s: is come back
 *
 *Description:Le but est de revoyer sur (s) l'inverse de la chaîne
 *de caractère.
 Pour parcourir la chaine dans le sens inverse
 * on créer un pointeur *inv qui prend la même adresse
 * que le pointeur s.
 * il aura comme fonction de recuperer la chaîne dans le bonne ordre
 * et de l'inversé avec la variable 'revers'
 * on incrémente le pointeur *inv pour pour qu'il mémorise la chaine
 * et le décrémente après la boucle pour retirer le caractère NULL
 *
 * Dans la 2nd boucle
 *on défini une condition qui arretera l'invertion
 * à la moitié du string
 * exemple :
 * AbCdE inv=4; s = 0
 * avec inv >= s quand inv = 2 et s = 2 la boucle s'arretera !
 *on applique une 1ere inversion de lettre
 *exemple:
 *si dans le 1ere while *inv = AbCdE;
 *dans le 2nd while *s = EbCdA; (seul le 1er et dernier caractère
 * sont inversé)
 *Puis pour permettre l'invertion des autres lettre
 *on incrémente et décremente avec s++ et inv--
 *ce qui passe l'invertion de la 1er à la derniere puis
 *quand s = 1 et inv = 3 de la 2nd lettre  à l'avant dernière
 *et s'en suive les autres lettres.
 *A la moitier du string la boucle s'arrète (si le nombre de lettre est
 *impaire la lettre du milieu ne change évidement pas !)

 *Return: Success
 */
void rev_string(char *s)
{
	char *inv = s;

	while (*inv != '\0')
	{
		inv++;
	}

	inv--;

	while (inv >= s)
	{
		char revers = *inv;
		*inv = *s;
		*s = revers;

		inv--;
		s++;
	}

}
