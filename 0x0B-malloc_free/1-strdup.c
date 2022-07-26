#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- returns apointer to a new string which is a duplicate
 * to the new string
 * @str: pointer to string
 * Return: returns a pointer to the duplicated string or NULL if there
 * was insufficient memmory
 */
char *_strdup(char *str)
{
	char *p;
	char *src;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	src = (char *)malloc(len + 1);
	if (src == NULL)
		return (NULL);
	p = src;
	while (*str)
		*p++ = *src++;
	*p = '\0';
	return (src);
}
