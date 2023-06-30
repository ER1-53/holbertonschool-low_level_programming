#include "main.h"

/**
 *_memcpy- return
 *@dest: is come back
 *@src: source
 *@n: nombre de lettre
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
