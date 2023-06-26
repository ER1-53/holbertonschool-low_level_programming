#include "main.h"

/**
 *_strlen - pour conmpterle nombre d'index
 *@s: valeur de s pointeur
 *
 *Description: it want eat me
 *
 *Return: Success
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
