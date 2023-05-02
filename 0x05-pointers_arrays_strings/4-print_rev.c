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
	for (length -= 1; length >= 0; length--)
	{
	putchar(*(s + length));
	}
	putchar('\n');
}
