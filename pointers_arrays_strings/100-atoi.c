#include "main.h"

/**
 *_atoi - for change a string to number
 *@s: is a caracter to be int
 *
 *Return: Success
 */
int _atoi(char *s)
{
	int i = 0, a = 1, number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			a = -1;
			i++;
		}

		if (s[i] >= '0' || s[i] <= '9')
		{
			number = (number * 10) + (s[i] - '0');
		}
		i++;
	}
	number = number * a;

	if(number == 0)
	{
		return (0);
	}

	return (number);
}
