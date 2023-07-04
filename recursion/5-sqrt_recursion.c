#include "main.h"

/**
 *res_sqrt_recursion - fonction pour l'iteration du i
 *_sqrt_recursion - fonction pour return racine carré
 *@i: is come back
 *@n: is recomming
 *
 *Description: it want eat me
 *
 *Return: Success
 */
int res_sqrt_recursion(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}

	return (res_sqrt_recursion(i + 1, n));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (res_sqrt_recursion(0, n));
}
