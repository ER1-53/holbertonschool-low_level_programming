#include "main.h"

/**
 *_atoi - for change a string to number
 *@s: is a caracter to be int
 *
 *Return: Success
 */
int _atoi(char *s)
{
	int i = 0, a = 1, number;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			a = -1;
			i++;
		}

		if (s[i] >= 48 || s[i] <= 57)
		{
			number = (number * 10) + (s[i] - 48);
		}
		i++;
	}
	number = number * a;
	return (number);
}
