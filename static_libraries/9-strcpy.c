#include "main.h"

/**
 *_strcpy - return
 *@dest: is come back
 *@src: is come back
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}