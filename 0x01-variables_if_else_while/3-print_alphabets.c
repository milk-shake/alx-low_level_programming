#include<stdio.h>
/**
 * main - entry point
 *
 * Return:0.
 */
int main(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)
	for (a = 'A'; A <= 'Z'; A++)
		putchar(a,A);
	putchar('\n');
	return (0);
}
