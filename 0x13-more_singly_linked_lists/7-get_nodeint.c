#include "lists.h"
/**
 * get_nodeint_at_index - gets nth node of listint_t
 * @head: pointer to head
 * @index: number of index
 * Return: data n at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	while (i != index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}

