#include <stdio.h>
/**
 * print_rev -  a function that prints a string, in reverse
 * @s: The string to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
	putchar(*(s + i));
	}
	putchar('\n');
}
