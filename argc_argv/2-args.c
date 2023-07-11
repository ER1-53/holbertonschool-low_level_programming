#include "main.h"
#include <stdio.h>

/**
 *main - Write a program that prints all arguments it receives.
 *@argc: is come back
 *@argv: the other
 *
 *Description: On crée un boucle pour afficher tous les arguments
 *présent dans argv, il est pris comme repère de dénombrement
 *argc qui connait la quantité d'argument présent
 *
 *Return: Success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
