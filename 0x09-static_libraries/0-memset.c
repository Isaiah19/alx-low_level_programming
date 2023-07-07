#include "main.h"

/**
 * _memset - This copies the character to S
 * @s: entry and return
 * @b: character to copy
 * @n: number of Bytes
 * Return: This returns S as a result
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
	return (s);
}
