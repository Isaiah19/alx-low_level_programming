#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int k;

	k = _atoi("98");
	printf("%d\n", k);
	k = _atoi("-402");
	printf("%d\n", k);
	k = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", k);
	k = _atoi("214748364");
	printf("%d\n", k);
	k = _atoi("0");
	printf("%d\n", k);
	k = _atoi("Suite 402");
	printf("%d\n", k);
	k = _atoi("  +  +  -  -98 Battery Street; San Francisco, CA 94111 - USA  ");
	printf("%d\n", k);
	k = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", k);
	return (0);
}
