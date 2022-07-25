#include <stdio.h>
#include <stdlib.h>
/**
 *  main - Entry Point
 *  @argc: arguments
 *  @argv: array pointing to arguments
 *  Return 0
 */
int main(int args, char *argv[])
{
	int mul = 1;
	int i;

	if (args != 3)
	{
		printf("%s\n","Error");
		return (1);
	}
	else
	{
		for (i = 1; i < args; i++)
		{
			mul *= atoi(argv[i]);
		
		}
		 printf("mul = %d\n", mul); 
	}
return (0);
}
