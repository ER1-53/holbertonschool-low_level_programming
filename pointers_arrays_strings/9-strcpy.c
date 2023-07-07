#include "main.h"

/**
 *_strcpy - Write a function that copies the string pointed to by src,
 *including the terminating null byte (\0), to the buffer pointed to by dest.
 *Return value: the pointer to dest
*
 *@dest: is come back
 *@src: is come back
 *
 *Description: On cherche à copier la string de 'src'
 * dans 'dest'
 *On appel chaques caractère de la string  avec la boucle for
 * puis les renvoies dans 'dest' sous forme dest[i] = src[i];
 *Lle acratère NULL ne sera pas pris en compte alors
 * on le rajoute en fin de boucle.
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
