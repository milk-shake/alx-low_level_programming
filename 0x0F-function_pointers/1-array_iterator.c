#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function as
 * parameter on eachn element of an array
 * @array: array to iterate on
 * @action: pointer to th function to be used to perform the
 * action
 * Return: 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
