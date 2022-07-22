#include "main.h"
/**
 * is_prime_number - states if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if prime , 0 if not
 */
int is_prime_number(int n)
{
	int a = 0;
	int b = 0;

	if (a < 2 || a % b == 0)
		return (0);
	if (b > a / 2)
		return (1);
	if (n == 2)
		return (1);
	return (is_prime_number(n));
}
