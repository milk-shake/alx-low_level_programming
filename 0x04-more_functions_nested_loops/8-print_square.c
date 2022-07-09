#include "main.h"
#include<stdio.h>
/**
 * print_square - prints a square, followed by a new line.
 *@size: is the int that will use for the argument of the function
 * Return: 0
 *
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
			print_square(size);
		}
		 putchar('\n');
	}
}
