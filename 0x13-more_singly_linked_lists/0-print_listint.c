#include "lists.h"

/**
 * print_listint - prints elements of listint_t list
 * @h: pointer to head
 * Return: Number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}

