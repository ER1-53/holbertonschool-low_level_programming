#include "main.h"

/**
 *_strncpy - return
 *@dest: is come back
 *@src: next
 *@n: again
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
        while ( i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
