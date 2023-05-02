#include <stdio.h>
/**
 * _strlen -  a function that returns the length of a string
 * @str: string
 * Return: length
 */
size_t _strlen(char *s)
{
	size_t length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
