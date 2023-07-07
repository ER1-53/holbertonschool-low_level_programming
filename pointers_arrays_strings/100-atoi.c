#include "main.h"

/**
 *_atoi - Write a function that convert a string to an integer.
 *
 *Prototype: int _atoi(char *s);
 *The number in the string can be preceded by an infinite number of characters
 *You need to take into account all the - and + signs before the number
 *If there are no numbers in the string, the function must return 0
 *You are not allowed to use long
 *You are not allowed to declare new variables of “type” array
 *You are not allowed to hard-code special values
 *We will use the -fsanitize=signed-integer-overflow gcc flag
 *to compile your code.

 *@s: is a caracter to be int
 *
 * description: *s est une suite de caractère de la table ASCII qui
 * représente des valeurs numériques
 * nous voulons changer ces caractères en valeur numérique
 * passer de '0' à 0 que la valeur soit négative ou positive.
 * Il faut donc prendre en compte si le 1er caractère est un '-'
 * 
 *
 *
 *
 *
 *Return: Success
 */
int _atoi(char *s)
{
	int i = 0, a = 1, number = 0;

	while (s[i])
	{
		if (s[i] == 45) // 45 peut etre remplacer par '-'
		{
			a = -1;
		}

		if (s[i] >= 48 || s[i] <= 57) // 48 et 57 par '0' et '9'
		{
			number = number * 10 + s[i] - 48;
		}
		i++;
	}
	number *= a;
}
