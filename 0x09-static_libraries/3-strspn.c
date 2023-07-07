#include "main.h"

/**
 * _strspn - My function
 * @s: The string literal
 * @accept: The second string
 * Return: This is the equal string to S
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	c = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
		if (accept[b] == s[a])
		{
		c++;
		break;
		}
		}
		if (accept[b] != s[a])
		{
		break;
		}
	}
	return (c);
}
