#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print The string Last digit of
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastd = n % 10;

	if (lastd > 5)
	{
		printf("lastd of %d is %d and is greater than 5\n", n, lastd);
	}
	if (lastd  == 0)
	{
		printf("lastd of %d is %d and is 0\n", n, lastd);
	}
	if (lastd < 6 && lastd != 0)
	{
		printf("lastd of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}