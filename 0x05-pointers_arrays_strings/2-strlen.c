#include "main.h"
#include <stdio.h>
/**
 * _strlen -Write a function that returns the length of a string.
 *
 * @s: character pointer s for string
 * Return:0.
 */
int _strlen(char *s)
{
	 char str[100] = "My first strlen!";
	 int i;

	 s = str;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	_putchar(i);
	return (0);
}
