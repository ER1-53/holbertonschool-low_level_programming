#include "main.h"

/**
 *rev_string - return
 *@s: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
void rev_string(char *s)
{
	char *inv = s;

	while (*inv != '\0')
	{
		inv++;
	}

	inv--;

	while (inv >= s)
	{
		char revers = *inv;
		*inv = *s;
		*s = revers;

		inv--;
		s++;
	}

}
