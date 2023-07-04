#include "main.h"

/**
 *_strstr - return
 *@haystack: is come back
 *@needle: next
 *
 *Description: it want eat me
 *
 *Return: Success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b  != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}
