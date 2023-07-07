#include "main.h"

/**
 * _isupper - checks if the letters are uppercase letters
 * @c: char to be checked
 * Return: Return 1 if uppercase else, return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
