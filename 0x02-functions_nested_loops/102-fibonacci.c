#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Nothing!
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", j);
	else if (i == 1)
	printf("%ld", k);
	else
	{
	k = k + j;
	j = k - j;
	printf(", %ld", k);
	}
	i++;
	}
	printf("\n");
	return (0);
}
