#include "main.h"

/**
 *_prime_number - return
 *@n: is come back
 *@i: is come back
 *
 *Description: On cherche a identifier les nombres 
 *
 *Return: Success
 */
int _prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (_prime_number(n, i - 1));
}

/**
 *is_prime_number - return
 *@n: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_number(n, n - 1));
}
