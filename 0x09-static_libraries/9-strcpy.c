#include "main.h"

/**
 * _strcpy - Copies a variable
 * @dest: This is destination
 * @src: This is the source
 * Return: This returns copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (start);
}
