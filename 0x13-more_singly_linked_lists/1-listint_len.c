#include "lists.h"

/**
 * listint_len - count nodes in a linked list
 * @h: head of the list
 *
 * Return: the num of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}

