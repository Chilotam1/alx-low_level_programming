#include <stdio.h>
/**
 * _strlen -  a function that returns the length of a string
 * @str: string
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str != '\0')
	{
	length++;
	str++;
	}
	return (length);
}
