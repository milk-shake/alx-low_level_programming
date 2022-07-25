#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * atoi function that converts a string to an int
 * @argc: arguments
 * @argv: array pointing to aurguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
		return (0);
	
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
		printf("sum = %d\n", sum);
		return (0);
}
