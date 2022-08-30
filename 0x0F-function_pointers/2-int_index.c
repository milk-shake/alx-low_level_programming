#include <stdio.h>
/**
 * int_index -  returns the index of the first element for which the cmp
 * function does not return 0
 *
 * @array: pointer to array
 * @size: size oof the array
 * @cmp: function pointer to the function to be used
 *
 * Return: 1 if no element matches, and -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
