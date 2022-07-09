#include<stdio.h>
#include "main.h"
/**
 * print_diagonal -prints a diagonal line on the terminal
 * @n:  is the int that will use for the argument of the function
 * Return :0.
 */
void print_diagonal(int n)
{
	int j;

	for (n = 0; n <= 10; n++)
	{
		for (j = 0; j <= 10; j++)
		{
			print_diagonal(n);
			print_diagonal(j);
		
		}
	}
putchar('\n');
}
