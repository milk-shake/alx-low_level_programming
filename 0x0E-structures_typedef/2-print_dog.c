#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints struct dog
 * @d: pointer to struct dog
 *
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name :%s\n", d->name);
		}
		else
		{
			printf("Name :(nill)\n");
		}
		if (d->owner != NULL)
		{
			printf("Owner is :%s\n", d->owner);
		}
		else
		{
			printf("Owner is : (nil)\n");
		}
		printf("Age is : %.1f\n", d->age);
	}
}
