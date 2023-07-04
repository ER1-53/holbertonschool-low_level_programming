#include "main.h"

/**
 *_islower - return value 1 or 0
 *@c: is the posibilty of letter or number
 *
 *Description: function to do if is lower
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
