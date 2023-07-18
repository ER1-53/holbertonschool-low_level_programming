#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"



/**
 *free_dog - fucntion struct dog
 * @d: pointer to my_dog
 *
 * Description: struct of the listing of the dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
