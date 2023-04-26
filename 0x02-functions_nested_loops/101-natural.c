#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (success)
 */

int main(void)

{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (1 % 5 == 0))
	{
	z += 1;
	}
	i++;
	}
	print("%d\n", z);
	return (0);
}
