#include "main.h"

/**
 *_function - return
 *@c: is come back
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

	return (dest);


}
