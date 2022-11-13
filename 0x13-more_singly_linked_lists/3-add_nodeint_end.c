#include "lists.h"
/**
 * add_nodeint_end - adds n new node at the end of a listint_t list
 * @head: pointer to head
 * @n: int to be added in list
 * Return: pointer to head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}

