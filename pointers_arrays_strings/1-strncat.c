#include "main.h"

/**
 *_strncat - return
 *@dest: is come back
 *@src: source
 *@n: nombre de lettre
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int u = 0;

	while (dest[i])
	{
		i++;
	}

	while (u < n && src[u] != '\0')
	{
		dest[i++] = src[u++];
	}
	return (dest);
}
