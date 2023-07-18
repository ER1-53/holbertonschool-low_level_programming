#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"



/**
 * new_dog - fucntion struct dog
 * @name: pointer to my_dog
 * @age: pointer to my_dog
 * @owner: pointer to my_dog
 *
 * Return: success return dog value
 *
 * Description: alias dog_t present dans le dog.h sous la forme d'un typedef
 * appel une fonction de pointeur '*new_dog' qui prend comme parametre
 * 'char name', 'float age' et 'char owner';
 * On crée un pointeur de struct.
 * On crée deux variables qui nous servent à compter les caractères de name et
 * owner avec la function strlen.
 * On alloue la mémoire nécessaire avec la type utilisé pas dog_t
 * et return NULL si celui-ci fail ou vide
 * On vise dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = strlen(name);
	length2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

