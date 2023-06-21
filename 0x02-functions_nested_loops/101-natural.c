#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 and 5 up to 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	int t, a, n, i, sum;

	scanf("%d", &t);
	for (a = 0; a < t; a++)
	{
	sum = 0;
	i = 3;
	scanf("%d", &n);
	while (i < n)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	sum = sum + i;
	}
	i++;
	}
	printf("%d\n", sum);
	}
}
