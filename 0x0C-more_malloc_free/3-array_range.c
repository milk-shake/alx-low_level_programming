#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function that creates an array of integers.
 * @min: first int
 * @max: last int
 * Return: pointer to newly allocated point in memory
 */
int *array_range(int min, int max)
{
	unsigned int nmemb = 1, size = 1, i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= (nmemb * size); i++)
		p[min] = INT_MIN;
		p[max] = INT_MAX;
	return(p);
}
