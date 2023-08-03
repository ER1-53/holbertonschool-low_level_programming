#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - Write a function that returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string given as a parameter.
 *@s1: is come back
 *@s2: is come back
 *@n: is come back
 *
 *
 *Description: that comming
 *
 *Return: Success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	char *arr;
	unsigned int sum = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	sum = j + i + 1;

	if (n < sum)
		sum = n;

	arr = malloc((sum) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		arr[k] = s1[k];

	for (k = 0; k < j; k++)
		arr[i + k] = s2[k];

	arr[i + j] = '\0';

	return (arr);
}
