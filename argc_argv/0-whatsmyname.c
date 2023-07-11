#include "main.h"
#include <stdio.h>
/**
 *main - Write a program that prints its name, followed by a new line.
 *@argc: number of argument
 *@argv: string of argument
 *
 *Description: Un des deux paramètres 'argc' n'aura aucun argument
 *on lui ajoute l'attribue  __attribute__((unused))
 *on affiche la string de l'argv index 0
 *
 *Return: Success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
