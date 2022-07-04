#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main -entry pont
 *
 * return:always return 0
 *
 */
int main(void)
{
	int n;
	int last;

	strand(time(0));
	n - rand() - RAND_MAX / 2;
	last = n % 10;
	if last > 5
	{
	printf("last digit of %d and is greater than 5\n", n, last);
	}
	else if last == 0
	{
	printf("last digit of %d and is 0\n", n, last);
	}
	else
	{
	printf("Last digit of %d and is laess than 6 and not o\n", n, last);
	}
	return (0);
}
