#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - Write a function that concatenates two strings.
 *
 *@s1: is come back
 *@s2: is come back
 *
 *Description: alloue de la mémoire pour pouvoir concatener deux string
 *
 *Return: Success
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int sum;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0'; i++)
		;
	for (j = 0 ; s2[j] != '\0' ; j++)
		;

	sum = (i + j) + 1;

	arr = malloc(sum * sizeof(char));

	if (arr == 0)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		arr[i] = s2[j];
		i++;
		j++;
	}

	arr[i] = '\0';
	return (arr);
}
