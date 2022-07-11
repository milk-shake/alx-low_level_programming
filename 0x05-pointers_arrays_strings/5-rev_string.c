#include "main.h"
#include <stdio.h>
/**
 * rev_string- function to reverse a string
 *
 * @s: character pointer
 * Return: 0.
 */
void rev_string(char *s)
{
	char b[10] = "My School";

	s = b;
	_puts(s);
	rev_string(b);
	_puts(b);

}
