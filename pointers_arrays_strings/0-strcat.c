#include "main.h"

/**
 *_strcat - return
 *@dest: is come back
 *@src: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *_strcat(char *dest, char *src)
{
	int s1 = 0;
	int s2 = 0;

	while (dest[s1] != '\0')
	{
		s1++;
	}

	while (src[s2] != '\0')
	{
		dest[s1] = src[s2];
		s2++;
		s1++;
	}
	_putchar('\0');
	dest[s1] = '\0';
	return (0);
}
