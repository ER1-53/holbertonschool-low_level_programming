#include "main.h"

/**
 *_memset - return
 *@s: the first pointer
 *@b: the first pointer
 *@n: the first pointer
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}