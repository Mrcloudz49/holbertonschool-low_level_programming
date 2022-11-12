#include "lists.h"

/**
 * listint_len - returns num of elements in oa linked listint_t list
 * @h: pointer to head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

