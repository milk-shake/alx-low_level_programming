#include "dog.h"
/**
 * init_dog - a function to innitialize struct dog
 * @d: pointer to structure
 * @name: name of dog
 * @age: age of the dog
 *
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
