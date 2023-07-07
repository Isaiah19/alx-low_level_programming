#include "main.h"

/**
 * _isalpha - checks if the entry is a lowercase or uppercase
 * @c: This is the entry
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
