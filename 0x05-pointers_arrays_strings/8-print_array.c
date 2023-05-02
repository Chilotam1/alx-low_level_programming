#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * @n:  number of elements of the array to be printed
 * @a: Arrays of integers
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
