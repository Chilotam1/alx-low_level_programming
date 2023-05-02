#include <stdio.h>
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string character to be printed
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	i++;
	}
	{
	putchar(str[i]);
	i += 2;
	}
	putchar('\n');
}
