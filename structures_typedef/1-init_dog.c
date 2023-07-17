#include <stdio.h>
#include <stdlib.h>
#include "dog.h"



/**
 * init_dog - fucntion struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: pointer to my_dog
 *
 * Description: struct of the listing of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
