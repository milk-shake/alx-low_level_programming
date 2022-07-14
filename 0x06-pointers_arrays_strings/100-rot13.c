#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @str: character pointer
 * Return:0.
 */
char *rot13(char *str)
{
	int i = 0;

	for (i = 0; str && str[i]; ++i)
	{
		if (str[i] >= 'a' && (str[i] + 13) <= 'z')
		{
			str[i] = str[i] + 13;
		}
	}
	return (0);
}
