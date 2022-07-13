#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat -  function that concatenates two strings.
 *
 * @dest: character pointer
 * @src: character pointer
 *
 * Return:0.
 */
char *_strcat(char *dest, char *src)
{
	char *result = malloc(strlen(dest) + strlen(src) + 1);

	strcpy(result, dest);
	_strcat(result, src);
	return (result);
}
