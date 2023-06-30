#include "main.h"

/**
 *_strchr - return
 *@s: is come back
 *@c: next
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else if (s[i] == '\0')
		{
			return ('\0');
		}
	}
	return (0);
}
