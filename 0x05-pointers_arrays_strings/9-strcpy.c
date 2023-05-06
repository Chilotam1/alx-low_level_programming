#include <stdio.h>
/**
 * _strcpy - copies the string,
 * @dest: - Destination value
 * @src: - Source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}