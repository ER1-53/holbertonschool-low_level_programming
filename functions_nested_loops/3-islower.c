#include "main.h"

/**
 *_islower - Write a function that checks for lowercase character.
 *@c: is the posibilty of letter or number
 *
 *Description: Si 'c' est un caractère entre 'a' et 'z' return 1 sinon
 *return 0.
 *
 *Return: Success
 *
**/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
