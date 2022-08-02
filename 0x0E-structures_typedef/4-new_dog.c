#include"dog.h"
#include <stdlib.h>
/**
 * new_dog - pointer to dog_t
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, n1, n2, n3;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n1 = 0; name[n1]; n1++)
		;
	n1++;
	dog->name = malloc(n1 * sizeof(char));
	if (name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (n2 = 0; owner[n2]; n2++)
		;
	n2++;
	dog->owner = malloc(n2 * sizeof(char));
	if (owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n2; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
