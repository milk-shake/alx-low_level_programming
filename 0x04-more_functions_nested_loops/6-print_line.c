#include<stdio.h>
#include "main.h"
/**
 * print_line -draws a straight line in the terminal.
 *
 * @n:  is the int that will use for the argument of the function
 * Return: 0.
 *
 */
void print_line(int n)
{
	for (n = 0; n <= 10; n++)
	{
		putchar('_');
	putchar('\n');

	}
}


