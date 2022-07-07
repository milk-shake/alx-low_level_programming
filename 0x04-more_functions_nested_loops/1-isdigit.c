#include "main.h"
#include <stdio.h>

/**
 * _isdigit - takes a single argument in the form
 *
 * of an integer and returns the value of type int
 * @c : is the int that will use for the argument of the function
 * Return: the value of type int
 */
int _isdigit(int c)
{

	if (c <= 9)
	{
	return (1);
	}
	else
		return (0);
}


