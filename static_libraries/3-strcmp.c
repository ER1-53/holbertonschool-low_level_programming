#include "main.h"

/**
 *_strcmp - function for comparaison
 *@s1: string 1
 *@s2: string 2
 *
 *Description: it want eat me
 *
 *Return: Success
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);

	return (0);
}
