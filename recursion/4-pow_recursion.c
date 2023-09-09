#include "main.h"

/**
 *_pow_recursion - Write a function that returns
 *the value of x raised to the power of y.
 *@x: is come back
 *@y: same
 *
 *Description: On cherche à retourner x à la puissance y;
 *exemple x = 5 et y = 2
 *
 * pow |y - 1| 1-1 = 0 donc x(5) * _pow_recursion(x, y-1) = *0 
 * pow |y - 1| 2-1 = 1 donc x(5) * _pow_recursion(x, y-1) = *5
 *resultat = 5 * 5 = 25
 *
 *Return: Success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
