#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha >= 'z'; alpha--)
	{
		putchar(alpha);
	}
		putchar('\n');
	return (0);
}
