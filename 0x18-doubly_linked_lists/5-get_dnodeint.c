#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nthe node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of the node to return
 * Return: address of nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}

