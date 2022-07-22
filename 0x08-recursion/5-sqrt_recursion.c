#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get the square of
 * Return: square of n or -1 if n < 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt_recursion(n));
}
