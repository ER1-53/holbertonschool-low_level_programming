#include "main.h"
#include <stdio.h>
/**
 *main - return
 *@argc: number of argument
 *@argv: string of argument
 *
 *Description: Un des deux paramètres 'argc' n'aura aucun argument
 *on lui ajoute l'attribue  __attribute__((unused))
 *
 *Return: Success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
