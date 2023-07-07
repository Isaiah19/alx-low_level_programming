#include "main.h"

/**
 * _strcmp - My function
 * @s1: This is my first entry
 * @s2: This is my second entry
 * Return: This is my result
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && *s1 == *s2; s1++, s2++)
	{
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
