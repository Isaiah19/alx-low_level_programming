#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */

void print_diagonal(int n)
{
	int k, m;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 1; k <= n; k++)
	{
	for (m = 1; m < k; m++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
