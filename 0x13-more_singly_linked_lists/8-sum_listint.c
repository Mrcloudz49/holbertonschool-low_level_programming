#include "lists.h"
/**
 * sum_listint - gets sum of list
 * @head: pointer to head
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

