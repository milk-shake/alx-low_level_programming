#include "main.h"
/**
 * print_array-  function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: a pointer
 * @n: an integer n
 * Return:0
 */
void print_array(int *a, int n)
{
	int array[5];

	a = array;
	n = 5;
	print_array(a, 5);
	_putchar(n);
	_putchar('\n');
}
