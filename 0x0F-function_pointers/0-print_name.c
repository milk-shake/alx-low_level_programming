#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer to function to print name
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		printf("My name is %s", name);
	f(name);
}
