#include "main.h"

/**
 *_strpbrk - return
 *@s: is come back
 *@accept: next
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j = 0;;

	while (s[j])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
