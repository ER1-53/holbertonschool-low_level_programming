#include "main.h"

/**
 *_islower - return value 1 or 0
 *@c: is the posibilty of letter or number
 *
 *Description: function to do if is lower
 *
 *return: Success
**/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');

	}
	return (0);
}
