#include <stdio.h>
/**
 * main -  all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	if (d != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
		return (0);
}
