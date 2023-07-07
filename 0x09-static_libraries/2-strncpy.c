#include "main.h"

/**
 * _strncpy - My main
 * @dest: This is my dest
 * @src: This is my source
 * @n: This is my n
 *Return: This is my result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0' ; b++)
	{
	dest[b] = src[b];
	}
	for (; b  < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
