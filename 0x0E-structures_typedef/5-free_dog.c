#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free dogs
 * @d: pointer to struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
