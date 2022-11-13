#include "lists.h"
/**
 * pop_listint - deletes the head lisnklist_t and returns the head node's data
 * @head: pointer to head
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num = 0;

	if (*head != NULL)
	{
		tmp = (*head)->next;
		num = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (num);
}

