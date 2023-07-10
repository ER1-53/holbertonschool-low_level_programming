#include "main.h"

/**
 *_isalpha - Write a function that checks for alphabetic character.
 *@c: is come back
 *
 *Description: Si les caractères sont de 'a' à 'z' en minuscule et
 *majuscule on return 1 sinon 0.
 *
 *Return: Success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
