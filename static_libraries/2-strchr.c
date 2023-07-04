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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
