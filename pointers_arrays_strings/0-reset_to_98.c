#include "main.h"

/**
 *reset_to_98 - Write a function that takes a pointer to an int
 *as parameter and updates the value it points to to 98.
 *@n: pointer qui renvoie 98
 *
 *Description: passer par réfèrence passing by reference
 *n = 402 si on passe par valeur (sans pointeur (*) la valeur n
 *de main reste 402 et celle de reset_to_98 est 98 alors qu'en
 *passant par reference la valeur de main devient 98)
 *
 *Return: Success
 */
void reset_to_98(int *n)
{
	*n = 98;
}
