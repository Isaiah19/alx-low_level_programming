#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet x10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char j;
	int i;

	i = 0;

	while (i < 10)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	i++;
	}
}
