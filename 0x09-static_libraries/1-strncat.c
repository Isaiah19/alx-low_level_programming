#include "main.h"

/**
 * _strncat - the main entry
 * @dest: the dest
 * @src: the src
 * @n: This is n
 * Return: The return
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
	dest[a] = src[b];
	a++;
	}
	if (b < n)
	{
	dest[a] = '\0';
	}
	return (dest);
}
