#include<stdio.h>
/**
 * main - entry point
 *
 * Retyrn:0.
 */
int main(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; A <= 'Z'; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
