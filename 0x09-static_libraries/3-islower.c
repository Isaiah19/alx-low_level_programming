#include "main.h"

/**
 * _islower - Checks if the entry is a lowercase letter.
 * @c: This is the entry
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
