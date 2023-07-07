#include "main.h"
#include <stddef.h>

/**
 * _strchr - My funcion
 * @s: My string of char
 * @c: My character
 * Return: The result
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		return (s);
		if (*s == 0)
		return (NULL);
	}
	return (NULL);
}
