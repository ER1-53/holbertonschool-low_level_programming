#include "main.h"

/**
 *factorial - return
 *@n: is come back
 *
 *Description: on cherche à factoriser 'n' c'est à dire
 *multiplier n et chque n-1 ensemble
 *Par exemple 5! 5*4*3*2*1 sans arriver sur n-1 = 0
 *ni n < 0 sinon bug du prog.
 *
 *on return la formule (n * fact(n-1)
 *soit si n = 5
 *5 * (5-1)
 *5*4 * (4-1)
 *5*4*3 * (3-1)
 *5*4*3*2 * (2-1)
 *5*4*3*2*1 * (1-1) = 0
 *
 *on return 1
 *1*5*4*3*2*1 = 120
 *à la fin de la fonction la pile d'opération s'effectu
 *et affiche le produit.
 *
 *Return: Success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
