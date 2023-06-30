#include "main.h"

/**
 *cap_string - change une caractere minuscule ne Maj
 *@s: renvoie le bon caractere
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] == ' ' ||
		     s[i] == '\n' ||
		     s[i] == ',' ||
		     s[i] == ';' ||
		     s[i] == '!' ||
		     s[i] == '.' ||
		     s[i] == '?' ||
		     s[i] == '"' ||
		     s[i] == '(' ||
		     s[i] == ')' ||
		     s[i] == '{' ||
		     s[i] == '\t' ||
		     s[i] == '}') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{

			s[i + 1] = s[i + 1] - 'a' + 'A';
		}

		i++;

	}
	return (s);
}
