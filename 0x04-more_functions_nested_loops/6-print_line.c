#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */

void print_line(int n)
{
	int k;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 1; k <= n; k++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
