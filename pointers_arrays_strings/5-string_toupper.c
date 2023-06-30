#include "main.h"

/**
 *string_toupper - change une caractere minuscule ne Maj
 *@s: renvoie le bon caractere
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}

	return (s);
}
