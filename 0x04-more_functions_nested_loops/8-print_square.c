#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */

void print_square(int size)
{
	int k, p;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 1; k <= size; k++)
	{
	_putchar('#');
	for (p = 2; p <= size; p++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
