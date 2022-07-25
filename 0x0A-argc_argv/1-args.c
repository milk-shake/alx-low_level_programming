#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: always 0
 */
int main (int argc,  char *argv[])
{
	int i;

	printf("argc %d\n",argc);
	printf("contents of argv[]\n");

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
