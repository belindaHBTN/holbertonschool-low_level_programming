#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a dog structure
 * @d: struc dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 *
 * Description: initialize a dog structure
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
