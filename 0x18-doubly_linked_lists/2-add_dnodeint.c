#include "lists.h"
/**
 * add_dnodeint - adds new node at beginning of dlistint_list
 * @head: pointer to head of list
 * @n: int to be stored in node
 * Return: address of new element, or NULL on fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}

