#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory
 * @d: struc dog
 *
 * Description: free memory
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
