#include "lists.h"

/**
 * get_nodeint_at_index - This returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: This is an index of the node to return
 * Return: This returns pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
	if (i <= index)
	{
	if (i == index)
	{
	cursor =  head;
	break;
	}
	head = head->next;
	i++;
	}
	else
	return (NULL);
	}
	return (cursor);
}
