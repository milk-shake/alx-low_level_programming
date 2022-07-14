#include "main.h"
#define MAX_SIZE 100
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: character pointer
 * @n: size of array
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int *first = a;
	int *last = a + n - 1;

	while (first < last)
	{
		int temp = *first;
		*last = temp;
		first++;
		last--;
	}
}
