#include "main.h"
#include <stdio.h>

/**
 *main - Write a program that prints the number of arguments passed into it.
 *@argc: is come back
 *@argv: the other
 *
 *Description: argv ne sera utilisé on lui ajoute l'attibut
 *__attribute__((unused))
 *on affiche le nombre d'argument present dans notre ligne de commande
 *sans prendre en compte le programme.
 *
 *Return: Success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
