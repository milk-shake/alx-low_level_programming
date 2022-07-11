#include "main.h"
#include <stdio.h>
/**
 * swap_int -swaps the values of two integers.
 *
 * @a: variable  to hold integers to be swapped
 * @b: variable  to hold integers to be swapped
 * Return: 0.
 */
void swap_int(int *a, int *b);

int main(void)
{
	int x = 40;
	int z = 60;

	_putchar('x');
	_putchar('z');

	swap_int(&x, &z);
	_putchar('x');
	_putchar('z');
	return (0);
}
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
