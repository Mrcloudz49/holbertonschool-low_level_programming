#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of listint_t list
 * @head: pointer to head
 * @n: int in listint_t
 * Return: pointer to head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

