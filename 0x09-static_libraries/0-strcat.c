#include "main.h"

/**
 *_strcat - main copy
 *@dest: The dest
 *@src: The source
 *
 * Return: This return to the result
 */

char *_strcat(char *dest, char *src)
{
	int m, n;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}
	for (n = 0; src[n] != '\0'; n++)
	{
	dest[m] = src[n];
	m++;
	}
	return (dest);
}
