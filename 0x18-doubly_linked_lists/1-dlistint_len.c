#include "lists.h"
/**
 * dlistint_len - returns num of elements in list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;
	
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

