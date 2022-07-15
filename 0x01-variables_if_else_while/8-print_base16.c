#include<stdio.h>
/**
 * main - entry point
 *
 * Return:0.
 */
int main(void)
{
	unsigned char a = 'o';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	a = 'i';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}

