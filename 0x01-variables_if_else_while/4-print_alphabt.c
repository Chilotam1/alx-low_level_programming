#include <stdio.h>
/**
 * main - Write a program that prints in lowercase except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	if (alpha != 'q' && alpha != 'e')

	{
		putchar(alpha);
	}
		putchar('\n');
	return (0);
}
