#include <stdio.h>
/**
 * _puts -  a function that prints a string, followed by a new line, to stdout
 * @str: string to be printed
 * Return: Nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
