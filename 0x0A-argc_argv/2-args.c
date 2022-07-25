#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("Number of aurguments = %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]  = %s\n", i, argv[i]);

	}
	return (0);
}
