#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * str_concat - concantenates two strings
 * @s1: first string
 * @s2: second string
 * Return:pointer to newly allocated space in memory
 * NULL on failure
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(char));

	if (ptr == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*ptr++ = *s1++;
	}
	*ptr = '\0';
	return (s2);
}
