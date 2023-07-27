#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This returns the number of elements in a linked list
 * @h: This is a pointer to the list_t list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{

	n++;

	h = h->next;
	}
	return (n);
}
